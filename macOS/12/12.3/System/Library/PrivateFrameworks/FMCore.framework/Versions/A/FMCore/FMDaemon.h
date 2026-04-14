@interface FMDaemon : NSObject

- (void)run;
- (void)initialize;
- (void)startup;
- (void)registerXPCEventHandlers;
- (void)startupWithCompletion:(id /* block */)a0;
- (id)xpcDarwinEventHandlers;
- (id)xpcDistributedEventHandlers;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;

@end
