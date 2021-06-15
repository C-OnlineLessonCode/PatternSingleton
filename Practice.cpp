#include <iostream>
#include <fstream>
#include <windows.h>


	class Settings {
	public:
		static Settings* GetInstance() {
			if (!m_instance) {
				m_instance = new Settings();
				// read from file
			}
			return m_instance;
		}

		std::string GetUserPrefferedPath() {
			return "C:\\test";
		}

	private:
		Settings() {}

		static Settings* m_instance;
	};

	Settings* Settings::m_instance = nullptr;

	int main()
	{
		std::string path = Settings::GetInstance()->GetUserPrefferedPath();
		/*
		Singleton
		Factory method
		Abstract factory
		*/
	}


