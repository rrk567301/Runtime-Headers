@protocol ABSyncAgent;

@interface ABSourceSyncPeriodicTaskScheduler : NSObject

@property (retain) id<ABSyncAgent> syncAgent;

- (id)machServiceName;
- (void).cxx_destruct;
- (void)checkInWithCentralizedTaskScheduling;
- (void)handleState:(long long)a0 activity:(id)a1;
- (void)runWithActivity:(id)a0;

@end
