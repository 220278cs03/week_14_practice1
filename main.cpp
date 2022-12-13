//
//  main.cpp
//  week_14_practice
//
//  Created by Gulnoza Sabirjonova on 13/12/22.
//

//Problem 1

//#include <iostream>
//#include<set>
//#include<iterator>
//using namespace std;
//void show(set<int> s){
//    set<int> :: iterator itr;
//    for(auto itr = s.begin(); itr != s.end(); itr++){
//        cout << *itr << " ";
//    }
//
//}
//
//int main() {
//    set<int> s;
//    s.insert(5);
//    s.insert(39);
//    s.insert(10);
//    s.insert(82);
//    s.insert(35);
//    s.insert(10);
//    s.insert(54);
//    show(s);
//    return 0;
//}


//Problem 2

//#include <iostream>
//#include<unordered_set>
//#include<iterator>
//using namespace std;
//void show(unordered_set<int> s){
//    unordered_set<int> :: iterator itr;
//    for(auto itr = s.begin(); itr != s.end(); itr++){
//        cout << *itr << " ";
//    }
//
//}
//
//int main() {
//    unordered_set<int> s;
//    s.insert(5);
//    s.insert(39);
//    s.insert(10);
//    s.insert(82);
//    s.insert(35);
//    s.insert(10);
//    s.insert(54);
//    show(s);
//    return 0;
//}

//Problem 3
//
//#include <iostream>
//#include<set>
//#include<iterator>
//using namespace std;
//void show(multiset<int> s){
//    multiset<int> :: iterator itr;
//    for(auto itr = s.begin(); itr != s.end(); itr++){
//        cout << *itr << " ";
//    }
//
//}
//
//int main() {
//    multiset<int> s;
//    s.insert(5);
//    s.insert(39);
//    s.insert(10);
//    s.insert(82);
//    s.insert(35);
//    s.insert(10);
//    s.insert(54);
//    show(s);
//    multiset<int> :: iterator itr1, itr2;
//    itr1 = s.find(10);
//    itr2 = s.find(54);
//    s.erase(itr1, itr2);
//    cout << endl;
//    show(s);
//    return 0;
//}


////Problem 4
//
//#include <iostream>
//#include<set>
//#include<iterator>
//using namespace std;
//void show(set<int> s){
//   set<int> :: iterator itr;
//    for(auto itr = s.begin(); itr != s.end(); itr++){
//        cout << *itr << " ";
//    }
//
//}
//
//int main() {
//    set<int> s;
//    s.insert(5);
//    s.insert(39);
//    s.insert(10);
//    s.insert(64);
//    s.insert(82);
//    s.insert(35);
//    s.insert(10);
//    s.insert(54);
//    show(s);
//    cout << endl;
//    multiset<int> :: iterator itr;
//
//    for(auto itr = s.begin(); itr != s.end(); itr++){
//        if(*itr  >= 39){
//            cout << *itr << " ";
//        }
//    }
//    return 0;
//}

////Problem 5
//
//#include <iostream>
//#include<map>
//#include<iterator>
//using namespace std;
//
//int main() {
//    map<int, int> m;
//    m[1] = 2;
//    m.insert({4,5});
//    m.insert(make_pair(8, 5));
//
//    for(auto i :m){
//        cout << i.first << ":" << i.second << endl;
//    }
//    return 0;
//}


//Problem 6

//#include <iostream>
//#include<unordered_map>
//#include<iterator>
//using namespace std;
//
//int main() {
//    unordered_map<int, int> m;
//    m[1] = 2;
//    m.insert({4,5});
//    m.insert(make_pair(8, 5));
//
//    for(auto i :m){
//        cout << i.first << ":" << i.second << endl;
//    }
//    return 0;
//}


////Problem 7
//
//#include <iostream>
//#include<map>
//#include<iterator>
//using namespace std;
//
//int main() {
//    map<int, int> m;
//    m[1] = 2;
//    m.insert({1,1});
//    m.insert({2,4});
//    m.insert({3,9});
//    m.insert({4,16});
//    m.insert({5,25});
//
//    cout << "Elements in map: " << endl;
//
//    for(auto i : m){
//        cout << "[ " << i.first << ", " << i.second << " ]" << endl;
//    }
//
//    cout << endl;
//
//    for(auto i : m){
//        cout << "Square of " << i.first << " is " << i.first * i.first << endl;
//    }
//    return 0;
//}
//


////Problem 8
//
//#include <iostream>
//#include<map>
//#include<iterator>
//using namespace std;
//
//int main() {
//    map<int, int> m;
//    m[1] = 2;
//    m.insert({3,9});
//    m.insert({2,4});
//    m.insert({5,25});
//    m.insert({9,81});
//    m.insert({1,1});
//
//    cout << "The number of elements in the Map are: " << m.size() << endl;
//
//    cout << "The elements of the Map m are: " << endl;
//    int j = 1;
//
//    for(auto i : m){
//
//        cout << "The Key " << j++ << " of Map m is " << i.first << " and it's corresponding value is " << i.second << endl;
//    }
//
//    cout << endl;
//
//    return 0;
//}
//

//Problem 9
 
#include <iostream>
#include<unordered_map>
#include<iterator>
#include<string>
#include<cctype>
using namespace std;

int main() {
    unordered_map<int, string> m;
    m.insert({3,"three"});
    m.insert({4,"four"});
    m.insert({1,"one"});
    m.insert({20,"twenty"});
    m.insert({31,"thirty one"});
    
    cout << "The number of elements in the Map are: " << m.size() << endl;
    
    cout << "\nAll elements of Map: \n" << endl;
    
    int j = 1;
    
    for(auto i : m){
        
        cout << "Key number " << j++ << " is: " << i.first << " and its values is: " << i.second << endl;
    }
    
    m.erase(20);
    
    cout << "\nAll elements of Map after erasing the key 20: \n" << endl;
    
    int k = 1;
    
    for(auto i : m){
        
        cout << "Key number " << k++ << " is: " << i.first << " and its values is: " << i.second << endl;
    }
    
    
    return 0;
}

