@interface MPCFairPlayPerformanceController : NSObject <MPServerObjectDatabaseObserver, MPCPlaybackAccountManagerObserver> {
    void /* unknown type, empty encoding */ context;
}

@property (class, nonatomic, readonly) MPCFairPlayPerformanceController *shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)database:(id)a0 didFinishImportRequest:(id)a1 result:(id)a2;
- (void)registerEngine:(id)a0;
- (void)accountManager:(id)a0 didChangeAccounts:(id)a1;
- (void)unregisterEngine:(id)a0;

@end
