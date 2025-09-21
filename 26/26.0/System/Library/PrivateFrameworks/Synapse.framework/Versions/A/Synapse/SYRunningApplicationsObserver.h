@class NSArray;

@interface SYRunningApplicationsObserver : NSObject {
    BOOL __isObservingRunningApplications;
    id /* block */ __runningApplicationsDidChangeHandler;
    NSArray *__cachedRunningApplications;
}

- (void)dealloc;
- (void)_runningApplicationsDidChange;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_sheduleRunningApplicationsDidChange;
- (void)startObservingRunningApplicationsWithHandler:(id /* block */)a0;

@end
