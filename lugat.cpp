//the headers map, string and iostream are used to be able to make use of map function, cin, cout and strings
#include <iostream>
#include <map>
#include <string>
using namespace std;
//main method is called
int main()
{
//a map called capitalcities is created which stores keys of type strings and corresponding values of type strings
map<string, string>capitalcities;
//the elements are added to the created map
capitalcities["NewDelhi"] = "India";
capitalcities["Bangalore"] = "Karnataka";
capitalcities["Mumbai"] = "Maharashtra";
capitalcities["Chennai"] = "TamilNadu";
//iterating through the created map to print out the key and value pairs from the map
for (auto element :capitalcities)
{
//element.first represents the key in the map
cout<<element.first<<" is the capital of ";
//element.second represents the value in the map
cout<<element.second<<endl;
}
return 0;
}
