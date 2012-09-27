#ifndef __TIMINGTESTS_H__
#define __TIMINGTESTS_H__

class TimingTests {
  private:
    int start;
    int stop;
    int elapsed;
    double seconds;
    bool codeStart;
    bool codeStop;

  public:
    bool clockStart();
    bool clockStop();
    void printTime(int start, int end);
};
#endif
