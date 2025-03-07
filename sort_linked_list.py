class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        List=[]
        temp=head 
        while temp is not None :
            List.append(temp.val)
            temp=temp.next 
        List.sort() 
        temp=head 
        cnt =0
        while temp is not None :
            temp.val=List[cnt] 
            cnt+=1 
            temp=temp.next 
        return head

        
