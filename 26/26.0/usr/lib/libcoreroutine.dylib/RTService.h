@class NSString;

@interface RTService : RTNotifier <RTWatchdogProtocol>

@property (nonatomic) BOOL isShuttingDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)setup;
- (void)_setup;
- (void)shutdownWithHandler:(id /* block */)a0;
- (void)checkInWithHandler:(id /* block */)a0;
- (id)name;

@end
