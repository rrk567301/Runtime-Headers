@interface FCKeyValueStoreSavePolicy : NSObject

+ (id)throttlePolicyWithDelay:(double)a0;
+ (id)unthrottledPolicy;
+ (id)defaultPolicy;
+ (id)appBackgroundPolicyWithActivityMonitor:(id)a0 backgroundTaskable:(id)a1;

- (void)scheduleSaveOnQueue:(id)a0 handler:(id /* block */)a1;

@end
