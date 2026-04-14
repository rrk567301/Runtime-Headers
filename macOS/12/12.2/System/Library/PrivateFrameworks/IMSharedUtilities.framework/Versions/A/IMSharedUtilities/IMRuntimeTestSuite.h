@class NSTimer, NSMutableArray, IMRuntimeTest;

@interface IMRuntimeTestSuite : IMRuntimeTest

@property (retain) NSMutableArray *tests;
@property (retain) NSMutableArray *runningTests;
@property (retain) IMRuntimeTest *currentTest;
@property (weak) NSTimer *timer;
@property double testSuiteStartDelay;
@property double testStartDelay;

+ (void)runTestsIfNeededWithRepeatCount:(long long)a0 withCount:(long long)a1;
+ (void)runTestsIfNeededWithRepeatCount:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)startTest;
- (void)currentTestDidFinish;
- (void)_startNextTest;
- (void)_timerExpired:(id)a0;
- (void)addTest:(id)a0;
- (void)removeTest:(id)a0;

@end
