https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
#include "pch.h"
#include "CppUnitTest.h"
#include "MachineFactory.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testing
{
	TEST_CLASS(CMachineFactoryTest)
	{
	public:
		TEST_METHOD_INITIALIZE(methodName)
		{
			extern wchar_t g_dir[];
			::SetCurrentDirectory(g_dir);
		}

		TEST_METHOD(TestCMachineFactoryCreate)
		{

            CMachineFactory factory;
            auto machine = factory.CreateMachine();
            Assert::IsTrue(machine != nullptr);
		}

	};
}