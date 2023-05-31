#include <vector>
#include <string_view>

int main(int argc,char* argv[]) {
	const std::vector<std::string_view> args(argv,argv+argc);

	return 0;
}
