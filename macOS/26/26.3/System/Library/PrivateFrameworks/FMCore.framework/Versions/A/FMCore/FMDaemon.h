@interface FMDaemon : NSObject

- (void)initialize;
- (void)run;
- (id)xpcDarwinEventHandlers;
- (void)registerXPCEventHandlers;
- (void)startup;
- (void)startupWithCompletion:(id /* block */)a0;
- (id)xpcDistributedEventHandlers;
- (id)verifyLaunchEventsConfiguration:(id)a0 withExclusions:(id)a1;

@end
