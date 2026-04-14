@class NSString;

@interface RTService : RTNotifier <RTWatchdogProtocol>

@property (nonatomic) BOOL isShuttingDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkInWithHandler:(id /* block */)a0;
- (void)shutdownWithHandler:(id /* block */)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)setup;
- (id)name;
- (void)_setup;

@end
