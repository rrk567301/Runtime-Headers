@interface ARWatchdogMonitor : NSObject

- (id)init;
- (void)updateStatus:(long long)a0;
- (void)addQueue:(id)a0 hangPolicy:(long long)a1;

@end
