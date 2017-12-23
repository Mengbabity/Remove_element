package remove_elements;

public class solution {
	public int removeElement(int[] nums, int val) {
	    
		int n=nums.length;
		int result=0;
		
		for(int i=0;i<n;i++)
		{
			if(nums[i]!=val)
			{
				nums[result]=nums[i];
				result++;
			}
		}
		System.out.println(result);
		return result;
		
	    }
}
