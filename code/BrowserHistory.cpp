
#include "BrowserHistory.hpp"

BrowserHistory::BrowserHistory()
{
    // No changes needed
}

BrowserHistory::~BrowserHistory()
{
    // No changes needed
}

/*
 * Purpose: Has to detect if a defect is present in the linkedlist pointed by head
 * @param none
 * @return integer length of defect if one exists. If defect not present return -1
 */
int BrowserHistory::findDefectLength(){

    // TODO START =============================================
    
    return 0;
    // TODO END ==================================================
}

/*
 * Purpose: Has to remove all the WebPage nodes from [start, end] inclusive.
 * Has to print appropriate messages on cout like below if the linkedlist is empty
 * or if the values of start/ end are improper
 * follow the same order for couts in the writeup - check empty list first, then check wrong start/end values
 * @param integers start and end (1 based indexing not 0 based)
 * @return none
 */
void BrowserHistory::removeWebPages(int start, int end){

    // TODO START ===================================================
  
	// Check if the list is empty
    if(isEmpty())
    {
        cout << "placeholder empty failure";
        return;
    }
    
    // Validate start and end values
     if(start > end || end < start || start < 1 || end < 1)
    {
        cout << "placeholder end value error";
        return;
    }
  
  
  	// Find the nodes before and after the range to be deleted

    WebPage* startNode;
    WebPage* temp;
    WebPage* beforeStart;
    WebPage* afterEnd;
  	WebPage* seeker =  head;
    
  	for(int q = 0; q < start; i++)
    {
      	if(seeker == nullptr || seeker->next == nullptr)
        {
          	cout << "error";
          	return;
        }
        seeker = seeker->next;
    }
  	
  	beforeStart = seeker;
  	startNode = seeker->next;
  
  	for(int q = 0; q < (end - start); q++)
    {
      	if(seeker == nullptr || seeker->next == nullptr)
        {
          	cout << "error";
          	return;
        }
        temp = seeker;
        delete temp;
        seeker = seeker->next;
    }
  	
  	afterEnd = seeker->next;

    startNode->next = afterEnd;

    // TODO END ===================================================
}


/*
 * Purpose: Interweave the webpages alternatively into a new linkedlist 
 * starting with the first webpage in the list one
 * Assign the head of the new interweaved list to the head of this BrowserHistory
 * DO NOT create new nodes and copy the data, just use the same nodes from one and two and change pointers
 * If one of them runs out of length append the remaining of the other one at end
 * @param two linkedlist heads one and two
 * @return none
 */
void BrowserHistory::mergeTwoHistories(WebPage *headOne, WebPage * headTwo){

    // TODO START =============================================
    
    // TODO END ==================================================
}
