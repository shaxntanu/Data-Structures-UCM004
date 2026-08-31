#include <iostream>

using namespace std;

int main() {

    int size, ch=0, f=-1, r=-1, n; 
    cout << "Enter size of array: ";
    cin >> size;
    int A[size];
    do
    {
        cout<<"Enter your choice: \n";
        cin >> ch; 
        if (ch < 1 || ch > 3) { 
            cout << "Invalid choice. Try again.\n";
            continue;
        }
        switch(ch)
        {
            case 1: 
                if (r == size-1)
                    cout << "Queue is full\n";
                else {
                    cout << "Enter element to insert: ";
                    cin >> n;
                    if (f == -1) {
                        f = 0;
                        r = 0;
                    } else {
                        r++;
                    }
                    A[r] = n;
                    cout << "Element inserted\n";
                }
                break;
            case 2: 
                if (f == -1)
                    cout << "Queue is empty\n";
                else {
                    for (int i=f; i<=r; i++)
                        cout << A[i] << " ";
                    cout << "\n";
                }
                break;
            case 3: break;
        }
    } while(ch!=3);
}
