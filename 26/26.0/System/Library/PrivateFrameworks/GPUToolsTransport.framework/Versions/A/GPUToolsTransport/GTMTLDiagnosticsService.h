@class GTObservableService;

@interface GTMTLDiagnosticsService : NSObject <GTMTLDiagnosticsService, GTMTLDiagnosticsServiceObserver> {
    GTObservableService *_observers;
}

- (unsigned long long)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)deregisterObserver:(unsigned long long)a0;
- (void)deregisterObserversForConnection:(id)a0 path:(id)a1;
- (void)notifyCommandBufferIssue:(id)a0;
- (void)notifyDiagnosticsIssue:(id)a0;
- (void)raiseRuntimeIssue:(id)a0;

@end
