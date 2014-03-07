#ifndef LIST_H
#define LIST_H
#include <vector>
#include <string>
class List
{
public:
    List();
    void setNameList(std::vector<std::string>);
    std::vector<std::string> getNameList();

    int getNameListSize();

    void setIndex(int);
    int getIndex();
    std::string getSelectedName();

    void setVariableNameList(std::vector<std::string>);
    std::vector<std::string> getVariableNameList();
    int getVariableNameListSize();

    void setValue(std::string,std::string,float);
    float getValue(std::string);
    float getValue(std::string,std::string);

    void clearValues();
    void createValues();

    int getRowsFromValues();
    int getColsFromValues();

protected:
    std::vector<std::string> name;
    std::vector<std::string> variableName;
    int index;
    std::vector < std::vector<float> > values;
private:
    int getPos(std::string,std::vector<std::string>);
};
#endif // LIST_H
