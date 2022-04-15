#include <iostream>

class boolshit {
private:
	bool m_value;

public:
	boolshit(bool value) {
		m_value = value;
	}

	operator bool() {
		return !m_value;
	}

	void operator =(bool value) {
		m_value = value;
	}

	bool operator ==(bool value) {
		return m_value != value;
	}

	bool operator !=(bool value) {
		return m_value == value;
	}

	bool operator !() {
		return m_value;
	}
};

int main(int argc, char* argv[]) {
	std::cout << "Hello, world!" << std::endl; // Hello, world!
	boolshit b = true;
	std::cout << (bool) b << std::endl; // 0
	std::cout << (b == true) << std::endl; // 0
	b = false;
	std::cout << (bool) b << std::endl; // 1
	std::cout << (b == true) << std::endl; // 1
}
