@class NSConditionLock;

@interface SMTaskManager : NSObject {
    NSConditionLock *taskTerminationLock;
    int termStatus;
}

- (void)timeout;
- (void).cxx_destruct;
- (void)_launchTaskSync:(id)a0;
- (BOOL)launchTaskSync:(id)a0 :(id)a1 :(double)a2;

@end
