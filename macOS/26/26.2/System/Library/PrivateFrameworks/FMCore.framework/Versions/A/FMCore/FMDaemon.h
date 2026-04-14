@interface FMDaemon : NSObject

- (void)initialize;
- (void)run;
- (id)xpcDistributedEventHandlers;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;
- (void)startup;
- (id)xpcDarwinEventHandlers;
- (void)registerXPCEventHandlers;
- (void)startupWithCompletion:(id /* block */)a0;

@end
