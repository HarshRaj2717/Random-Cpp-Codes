#include <iostream>
#include <memory>

using namespace std;

class Entity
{
public:
    Entity()
    {
        cout << "Created Entity!" << endl;
    }
    Entity(const string log)
    {
        cout << "Created Entity! With log: " << log << endl;
    }
    ~Entity()
    {
        cout << "Destroyed Entity!" << endl;
    }
    void Print()
    {
        cout << "Printing!" << endl;
    }
};

int main()
{
    // unique_ptr
    {
        cout << "\n>>> Unique Pointers" << endl;
        unique_ptr<Entity> unique = make_unique<Entity>();
        unique_ptr<Entity> unique2(new Entity); // less preferred way for both unique & shared ptr
        unique_ptr<Entity> uniqueLog = make_unique<Entity>("yoyo");

        // copy isn't allowed
        // unique_ptr<Entity> temp = unique;

        unique->Print();
        // can't really pass this into some other function,
        // check out: https://youtu.be/tSIBKys2eBQ?si=UAmkRh6zFNAyAbps
    }

    // shared_ptr (uses reference counting)
    {
        cout << "\n>>> Shared Pointers" << endl;
        shared_ptr<Entity> shared2;
        {
            shared_ptr<Entity> shared = make_shared<Entity>();
            shared2 = shared; // copying is allowed
            // `shared` won't be destroyed in this scope now
            // as the reference count is still higher than 0 (due to `shared2`)
        }
        shared2->Print();
        // it will finally be deleted here
    }

    // weak_ptr (doesn't increase ref count of shared_pointer)
    {
        cout << "\n>>> Weak Pointers" << endl;
        weak_ptr<Entity> weak;
        {
            shared_ptr<Entity> shared = make_shared<Entity>();
            weak = shared; // copying is allowed
            // `shared` will be destroyed in this scope only
            // as the reference count isn't increased due to `weak`
        }
        // shared2->Print(); // already deleted, hence can't use anymore
        if (weak.expired())
        {
            // can check if it still exists or not using this method
            cout << "Already Deleted" << endl;
        }
    }

    return 0;
}