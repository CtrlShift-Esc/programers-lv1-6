#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
	vector<int> answer;
	string s = to_string(n);
	for (int i = s.length() - 1; i >= 0; i--)
	{
		char ch = s[i];
		answer.push_back(atoi(&ch));
	}
	return answer;
}
void main()
{
	//test
	//auto vt = solution({5,4,3,2,1});
}