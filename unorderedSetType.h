
#ifndef H_unorderedSet
#define H_unorderedSet
#include "arrayListType.h"  

template <class elemType>
class unorderedSetType : public arrayListType<elemType>
{
public:
    void insertAt(int location, const elemType& insertItem);
    void insertEnd(const elemType& insertItem);
    void replaceAt(int location, const elemType& repItem);
    int seqSearch(const elemType& searchItem) const;
    void remove(const elemType& removeItem);

    unorderedSetType(int size = 100);
    //Constructor

};


template <class elemType>
int unorderedSetType<elemType>::seqSearch
(const elemType& searchItem) const
{
    int loc;
    bool found = false;

    for (loc = 0; loc < this->length; loc++)
    {
        if (this->list[loc] == searchItem)
        {
            found = true;
            break;
        }

        if (found)
        {
            return loc;
        }
        else
        {
            return -1;
        }
    }
}
template <class elemType>
void unorderedSetType<elemType>::insertAt(int location,
    const elemType& insertItem)
{
    int loc = seqSearch(insertItem);
    if (loc == -1)
    {
        if (location < 0 || location >= this->maxSize)
        {
            cout << "The position of the item to be inserted "
                << "is out of range." << endl;
        }
        else if (this->length >= this->maxSize)
        {
            cout << "Cannot insert in a full list" << endl;
        }
        else
        {
            for (int i = this->length; i > location; i--)
            {
                this->list[i] = this->list[i - 1];	

                this->list[location] = insertItem; 

                this->length++;
            }
        }
    }
    else
    {
        cout << "Cannot insert duplicate item";
    }
} //end insertAt

template <class elemType>
void unorderedSetType<elemType>::insertEnd
(const elemType& insertItem)
{
    int loc = seqSearch(insertItem);
    if (loc == -1)
    {
        if (this->length >= this->maxSize)
        {
            cout << "Cannot insert in a full list." << endl;
        }
        else
        {
            this->list[this->length] = insertItem; //insert the item at the end
            this->length++; //increment the length
        }
    }
    else
    {
        cout << "Cannot insert duplicate item at the end";
    }

} 


template <class elemType>
void unorderedSetType<elemType>::remove
(const elemType& removeItem)
{
    int loc;

    if (this->length == 0)
    {
        cout << "Cannot delete from an empty list." << endl;
    }
    else
    {
        loc = seqSearch(removeItem);

        if (loc != -1)
        {
            this->removeAt(loc);
        }
        else
        {
            cout << "The item to be deleted is not in the list."
                << endl;
        }
    }
} 
template <class elemType>
void unorderedSetType<elemType>::replaceAt(int location,
    const elemType& repItem)
{
    int loc = seqSearch(repItem);
    if (loc == -1)
    {
        if (location < 0 || location >= this->length)
        {
            cout << "The location of the item to be "
                << "replaced is out of range." << endl;
        }
        else
        {
            this->list[location] = repItem;
        }
    }
    else
    {
        cout << "Cannnot replace a duplicate item";
    }

} //end replaceAt

template <class elemType>
unorderedSetType<elemType>::unorderedSetType(int size)
    : arrayListType<elemType>(size)
{
};
#endif
