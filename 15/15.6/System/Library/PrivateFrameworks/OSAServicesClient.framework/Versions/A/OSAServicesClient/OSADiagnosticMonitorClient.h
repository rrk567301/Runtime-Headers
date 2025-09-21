@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface OSADiagnosticMonitorClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_observers;
}

@property (class, readonly, nonatomic) OSADiagnosticMonitorClient *sharedClient;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 forTypes:(id)a1;
- (id)q_shimWrappingObserver:(id)a0 creatingIfAbsent:(char)a1 removingIfPresent:(char)a2;

@end
