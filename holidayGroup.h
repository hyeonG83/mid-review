// 3. holidayGroup.h파일에 holidayGroup class를 인라인으로 구현하려고 합니다. 다음을 확인하여 holidayGroup.h파일을 완성해보세요.  
// 3-1. 헤더가드, 전처리지시자를 넣으세요.
// 3-2. 본인이름학번의 네임스페이스안에 holidayGroup class를 정의하세요.
#pragma once
#include "holiday.h"
#include <array>

namespace LEEHyeonGyeon2693251
{
    // 3-3. 상수 max를 10으로 선언합니다. 
    const int max{10}; // class 안 쪽에 넣으면 오류, 
    class holidayGroup
    {
        // 3-4. 멤버변수는 3개: std::string형의 groupName, holiday형의 max개의 std::array형 holidayList, int형의 n    
        std::string groupName;
        std::array<holiday, max> holidayList;
        int n;
        
    public:
        // 3-5. 생성자: 매개변수 1개, groupName 초기화, n은 0으로 초기화
        // 3-6. addHoliday멤버함수(매개변수는 const holiday&형): n이 max보다 크거나 같으면 프로그램종료, holidayList의 n 인덱스변수에 매개변수 할당, n값은 +1
        holidayGroup(const std::string& n = "no name yet"):groupName{n}, n{0}{}
    
        void addHoliday(const holiday& h)
        {
            if ( n >= max )
            {
                std::cout << "(in holidayGroup::addHoliday) over max\n";
                std::exit(1);
            }
            holidayList[n] = h; n += 1;
        }

        // 3-7. print멤버함수: 표준스트림으로 groupName과 holidayList를 출력, 이때 holidayList는 holiday형 n개 출력해야 합니다.
        void print () const
        {
            std::cout << groupName << std::endl;
            for (int i=0; i < n; ++i)
                std::cout << holidayList[i];
            std::cout << std::endl;
        }  
        // 3-8. getGroupName, setGroupName 함수를 참조를 이용하여 정의하세요.
        const std::string& getGroupName() const {return groupName;}
        // 3-9. const 멤버함수가 필요한 경우 const 멤버함수로 정의하세요. 
            void setGroupName(const std::string& n){groupName =n;}

    };
}