#include "Averager.h"

Averager::Averager() {
    total_wait_ = 0;
    students_serviced_ = 0;
}

void Averager::process_student(Student student, int now) {
    assert(now >= student.arrival_time());
    total_wait_ += now-student.arrival_time();
    total_question_time_ += student.question_duration();
    students_serviced_ ++;
    //hello
}
