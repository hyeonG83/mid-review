// 3. holidayGroup.h파일에 holidayGroup class를 인라인으로 구현하려고 합니다. 다음을 확인하여 holidayGroup.h파일을 완성해보세요.  
// 3-1. 헤더가드, 전처리지시자를 넣으세요.
// 3-2. 본인이름학번의 네임스페이스안에 holidayGroup class를 정의하세요.



#pragma
#include "holiday.h"
#include <array>

namespace LEEHyeonGyeon2693251
{
    
    class holidayGroup
    {

        // 3-3. 상수 max를 10으로 선언합니다. 
        // 3-4. 멤버변수는 3개: std::string형의 groupName, holiday형의 max개의 std::array형 holidayList, int형의 n
        // 3-5. 생성자: 매개변수 1개, groupName 초기화, n은 0으로 초기화
        const int max (10);
        std::string& groupName;
        holiday std::array holidayList[max];
        int n;

        {groupName (), n ==0;}

    public:
        // 3-6. addHoliday멤버함수(매개변수는 const holiday&형): n이 max보다 크거나 같으면 프로그램종료, holidayList의 n 인덱스변수에 매개변수 할당, n값은 +1
        addHoliday (const holiday& n)
        {
            if (n >= max) exit(1);

            holidayList[++n]

        }

        // 3-7. print멤버함수: 표준스트림으로 groupName과 holidayList를 출력, 이때 holidayList는 holiday형 n개 출력해야 합니다.
        print ( GroupName, holidayList[n])
        {
            std::cout << "GroupName is: " << groupName << ", and holidayList is :" << holidayList << std::endl;
        }

        // 3-8. getGroupName, setGroupName 함수를 참조를 이용하여 정의하세요.  
        // 3-9. const 멤버함수가 필요한 경우 const 멤버함수로 정의하세요. 


        getGroupName()
        {
            std::cout << "Enter groupName: ";
            std::cin >> groupName;
            std::cout << std::endl;
        }
        
        const setGroupName()
        {
            std::cout << "";
            
            print();
        }


    };
};