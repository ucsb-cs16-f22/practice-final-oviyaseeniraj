// Write your name: OVIYA SEENIRAJ
// Write your perm number: 3400652
// Do not include a main function in this file
// Only submit this file
// See code.h for the descriptions of each problem
#include "code.h"
using namespace std;


/* Problem 1: 10 pts */

int max = 0;
TeaPacket* biggestValue = nullptr;
int numIterated = 0;
TeaPacket* bestPacket(TeaPacket* head){
   if (head == nullptr && numIterated = 0) //if list empty
   {
      return 0;
   }
   else if (head == nullptr) //if reached end of list
   {
      return biggestValue;
   }

   int value = head->rating * head->rarity;
   if (value > max) // if we find a biggestValue node
   {
      biggestValue = head;
      max = value;
   }
   numIterated++;
   bestPacket(head->next);
}



/* Problem 2: 10 points*/

Node* insert(Node* head, int value){
   Node* currNode = head;
   while (currNode != nullptr) // while we still have values
   {
      Node* toInsert = nullptr; // creating node of given data
      toInsert->data = value;
      if (currNode->next == nullptr) // if to be placed at end of list
      {
         currNode->next == toInsert;
      }
      else if (currNode->data > value) // if to be placed before head
      {
         toInsert->next = head;
         return toInsert;
      }
      else if (currNode->next->data > value) // 'normal' case, if to be placed at the next spot
      {
         Node* temp = currNode->next;
         currNode->next = toInsert;
         toInsert->next = temp;
         return head;
      }
      else // if place not found yet
      {
         currNode = currNode->next;
      }
   }
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


