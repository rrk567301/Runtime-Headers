@interface FMDaemon : NSObject

- (void)initialize;
- (void)run;
- (void)startup;
- (void)startupWithCompletion:(id /* block */)a0;
- (id)xpcDarwinEventHandlers;
- (id)xpcDistributedEventHandlers;
- (void)registerXPCEventHandlers;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;

@end
