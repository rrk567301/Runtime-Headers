@interface FMDaemon : NSObject

- (void)initialize;
- (void)registerXPCEventHandlers;
- (void)run;
- (void)startup;
- (void)startupWithCompletion:(id /* block */)a0;
- (id)xpcDarwinEventHandlers;
- (id)xpcDistributedEventHandlers;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;

@end
