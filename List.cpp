#include "List.h"
#include <string>
#include <iostream>
#include <algorithm>
List::List():index(0)
{
}
void List::setNameList(std::vector<std::string> i)
{
    name=i;
}
std::vector<std::string> List::getNameList()
{
    return name;
}
int List::getNameListSize()
{
    return name.size();
}
void List::setIndex(int i)
{
    index=i;
}
int List::getIndex()
{
    return index;
}
std::string List::getSelectedName()
{
    return name[index];
}
void List::setVariableNameList(std::vector<std::string> i)
{
    variableName=i;
}
std::vector<std::string> List::getVariableNameList()
{
    return variableName;
}
int List::getVariableNameListSize()
{
    return variableName.size();
}
void List::clearValues()
{
    values.clear();
}
void List::createValues()
{
    for (int i = 0; i < name.size(); i++) {
        std::vector<float> row; // Create an empty row
        for (int j = 0; j < variableName.size(); j++) {
          row.push_back(i * j); // Add an element (column) to the row
        }
        values.push_back(row); // Add the row to the main vector
    }
}
int List::getRowsFromValues()
{
    return values.size();
}
int List::getColsFromValues()
{
    int cols;
    if(values.size()==0)
    {
        cols=0;
    }
    else
    {
        cols=values[0].size();
    }

    return cols;
}
void List::setValue(std::string text1,std::string text2,float val)
{
    int ind1=getPos(text1,name);
    int ind2=getPos(text2,variableName);

  values[ind1][ind2]=val;

}
float List::getValue(std::string text)
{
  int ind2=getPos(text,variableName);
  return values[index][ind2];
}
float List::getValue(std::string text1,std::string text2)
{
  int ind1=getPos(text1,name);
  int ind2=getPos(text2,variableName);
  return values[ind1][ind2];
}
int List::getPos(std::string text,std::vector<std::string> vec)
{
   std::vector<std::string>::iterator i= vec.begin();
   i=std::find(vec.begin(), vec.end(), text);
   int pos;
   if (i != vec.end ())
   {
       pos = distance (vec.begin (), i);
   }
   return pos;
}


























