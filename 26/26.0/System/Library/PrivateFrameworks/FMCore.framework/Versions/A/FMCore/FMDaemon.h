@interface FMDaemon : NSObject

- (id)xpcDistributedEventHandlers;
- (void)run;
- (void)initialize;
- (void)startupWithCompletion:(id /* block */)a0;
- (id)xpcDarwinEventHandlers;
- (void)startup;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;
- (void)registerXPCEventHandlers;

@end
