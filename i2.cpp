#include &lt;iostream&gt;
#include &lt;vector&gt;
#include &lt;algorithm&gt;
using namespace std;

int main(){
    vector&lt;string&gt; crops = {"Cotton", "Groundnut", "Millet", "Rice", "Wheat"};
    sort(crops.begin(), crops.end());

    string target = "Millet";
    int l=0, r=crops.size()-1, mid;

    while(l&lt;=r){
        mid = (l+r)/2;
        if(crops[mid] == target){
            cout &lt;&lt; target &lt;&lt; " is recommended crop!" &lt;&lt; endl;
            return 0;
        }
        else if(crops[mid] &lt; target) l = mid+1;
        else r = mid-1;
    }

    cout &lt;&lt; "Crop not found." &lt;&lt; endl;
}
