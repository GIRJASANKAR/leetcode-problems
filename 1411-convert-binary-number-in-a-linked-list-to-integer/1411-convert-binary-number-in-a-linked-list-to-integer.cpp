/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> vec;
        int ans=0;
        while(head!=NULL){
            vec.push_back(head->val);
            head=head->next;
        }
        int size=vec.size();
        cout<<vec.size()<<" vec size"<<endl;

        for(int i=size-1;i>=0;i--){
            cout<<i<<" i ki value "<< "v[i] value "<<vec[vec.size()-1-i]<<endl;
            if(vec[vec.size()-1-i]==1){
                 int power=pow(2,i);
                cout<<"power"<<power<<endl;
                ans+=power;
            }
         
        }
        return ans;
    }
};