
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        unordered_map<ListNode*, int> umap;
        ListNode* temp = head;
        while(temp != NULL){
            umap[temp]++;
            if(umap[temp]> 1){
                return temp;
            }
            temp = temp->next;;
        }
        

        return NULL;
    }
};
