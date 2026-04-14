@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface GTMTLDiagnosticsService : NSObject <GTMTLDiagnosticsService, GTMTLDiagnosticsServiceObserver> {
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_observerIdToObserver;
    unsigned long long _nextObserverId;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)registerObserver:(id)a0;
- (void)deregisterObserver:(unsigned long long)a0;
- (void)notifyCommandBufferIssue:(id)a0;
- (void)notifyDiagnosticsIssue:(id)a0;
- (void)raiseRuntimeIssue:(id)a0;

@end
