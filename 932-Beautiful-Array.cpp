class Solution
{
public:
    vector<int> beautifulArray(int n)
    {
        vector<int> ans;
        ans.push_back(1);

        int val = 2;
        while (val <= n)
        {
            vector<int> temp;
            for (int it : ans)
                if (2 * it - 1 <= val)
                    temp.push_back(2 * it - 1);

            for (int it : ans)
                if (2 * it <= val)
                    temp.push_back(2 * it);

            ans = temp;
            val++;
        }

        return ans;
    }
};