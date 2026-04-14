@interface ADBackgroundTaskScheduler : ADSingleton

+ (id)sharedInstance;
+ (void)unregisterTaskDelegate:(id)a0;
+ (void)registerTaskDelegate:(id)a0 forRequestID:(id)a1;

- (void)checkOnTask:(id)a0;
- (void)cancelBackgroundTask:(id)a0;
- (void)addBackgroundTask:(id)a0;
- (id)init;
- (void)handleXPCActivity:(id)a0 withID:(id)a1;

@end
