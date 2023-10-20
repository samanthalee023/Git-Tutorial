#ifndef AVERAGER_H
#define AVERAGER_H

#include "Student.h"

class Averager {
    public:
        Averager();
        int total_wait() const { return total_wait_; }
        int total_question_time() const { return total_question_time_; }
        int students_serviced() const { return students_serviced_; }

        // add student to Averager
        // expects student and current time
        void process_student(Student student, int now);

        double take_average_wait() const { return total_wait_ / students_serviced_; }
        double take_average_question_time() const { return total_question_time_ / students_serviced_; }
    private:
        int total_wait_;
        int total_question_time_;
        int students_serviced_;
};

#endif
