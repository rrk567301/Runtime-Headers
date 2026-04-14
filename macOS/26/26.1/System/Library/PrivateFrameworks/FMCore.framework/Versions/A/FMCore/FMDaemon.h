@interface FMDaemon : NSObject

- (void)run;
- (void)initialize;
- (id)xpcDistributedEventHandlers;
- (void)startupWithCompletion:(id /* block */)a0;
- (id)xpcDarwinEventHandlers;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;
- (void)startup;
- (void)registerXPCEventHandlers;

@end
