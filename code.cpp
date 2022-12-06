// Write your name: OVIYA SEENIRAJ
// Write your perm number: 3400652
// Do not include a main function in this file
// Only submit this file
// See code.h for the descriptions of each problem
#include "code.h"
using namespace std;


/* Problem 1: 10 pts */

// int max = 0;
// TeaPacket* biggestValue = nullptr;
// int numIterated = 0;
TeaPacket* bestPacket(TeaPacket* head){
   // if (head == nullptr && numIterated = 0) //if list empty
   // {
   //    return 0;
   // }
   // else if (head == nullptr) //if reached end of list
   // {
   //    return biggestValue;
   // }

   // int value = head->rating * head->rarity;
   // if (value > max) // if we find a biggestValue node
   // {
   //    biggestValue = head;
   //    max = value;
   // }
   // numIterated++;
   // bestPacket(head->next);

   // if reached end of list, return currnode
   // else, check if value is bigger than big node value - set currNode = biggestNode
   //    if nextnode bigger send next Node recursivelty
   //    else set nextnode to curr node then send nextnode recursively

   // TeaPacket* currNode = head;
   // if (currNode == nullptr)
   // {
   //    return 0;
   // }
   // if (currNode->next == nullptr)
   // {
   //    return currNode;
   // }

   // int currValue = currNode->rarity * currNode->rating;
   // int nextValue = currNode->next->rarity * currNode->next->rating;
   // if (nextValue > currValue)
   // {
   //    bestPacket(currNode->next);
   // }
   // else
   // {
   //    currNode->next = currNode;
   //    bestPacket(currNode->next);
   // }

   //check each node 1 by 1 against the next and have it go recursively through the list
   // take curr node, compare w bestpacket(nextnode) = gives best of two

   // if (currNode == nullptr)
   // {
   //    return 0;
   // }
   // if (currNode->next == nullptr)
   // {
   //    return currNode;
   // }

   // int currValue = currNode->rarity * currNode->rating;
   // int nextValue = bestPacket(currNode->next)->rarity * bestPacket(currNode->next)->rating;

   // if (currValue > bestPacket(currNode->next)->rarity*bestPacket(currNode->next)->rating)
   // {
   //    return currNode;
   // }
   // else
   // {
   //    return bestPacket(currNode->next);
   // }

   // TeaPacket* curr = head->next;
   // TeaPacket* nextNode = nullptr;
   // if (head == nullptr)
   // {
   //    return 0;
   // }
   // if(curr==nullptr)
   // {
   //    return head;
   // }
   // else
   // {
   //    nextNode = bestPacket(curr);
   // }

   // int headValue = head->rarity * head->rating;
   // int nextValue = nextNode->rarity * nextNode->rating;
   // if (headValue > nextValue)
   // {
   //    return head;
   // }
   // else{
   //    return nextNode;
   // }

   if (head == nullptr)
   {
      return 0;
   }
   TeaPacket* nextBig = bestPacket(head->next);
   if (nextBig->rarity * nextBig->rating > head->rarity * head->rating)
   {
      return nextBig;
   }
   else
   {
      return head;
   }
}



/* Problem 2: 10 points*/

Node* insert(Node* head, int value){
   // Node* currNode = head;
   // while (currNode != nullptr) // while we still have values
   // {
   //    Node* toInsert = new Node(); // creating node of given data
   //    toInsert->data = value;
   //    if (currNode->next == nullptr) // if to be placed at end of list
   //    {
   //       currNode->next == toInsert;
   //    }
   //    else if (currNode->data > value) // if to be placed before head
   //    {
   //       toInsert->next = head;
   //       return toInsert;
   //    }
   //    else if (currNode->next->data > value) // 'normal' case, if to be placed at the next spot
   //    {
   //       Node* temp = currNode->next;
   //       currNode->next = toInsert;
   //       toInsert->next = temp;
   //       return head;
   //    }
   //    else // if place not found yet
   //    {
   //       currNode = currNode->next;
   //    }
   // }
   // return head;

   Node* newNode = new Node();
   newNode->data = value;
   
   if (value < head->data) // edge case for if value has to go at very beginning 
   {
      newNode->next = head;
      return newNode;
   }
   
   if (head->next == nullptr) // edge case for inserting at end
   {
      head->next = newNode;
      newNode->next = nullptr;
      return head;
   }

   if (value < head->next->data) // base case: found spot to insert in middle
   {
      Node* temp = head->next;
      head->next = newNode;
      head->next->next = temp;
      return head;
   }
   
   insert(head->next, value);
   return head;
}

/* Problem 3: 10 points*/

bool isBalanced(std::string s){
   int countA = 0;
   int countB = 0;
   for (int i = 0; i < s.length(); i++)
   {
      if (s[i] == 'A')
      {
         countA = countA + 1;
      }
      else if (s[i] == 'B')
      {
         countB = countB + 1;
      }
   }
   if (countA == countB)
   {
      return true;
   }
   return false;
}


