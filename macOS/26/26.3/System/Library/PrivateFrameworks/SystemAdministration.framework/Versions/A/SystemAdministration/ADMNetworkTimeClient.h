@interface ADMNetworkTimeClient : NSObject

+ (id)sharedNetworkTimeClient;

- (void)setServers:(id)a0;
- (void)start;
- (void)stop;
- (id)server;
- (void)setServer:(id)a0;
- (void)restart;
- (id)servers;
- (BOOL)isRunning;
- (BOOL)isSyncing;
- (BOOL)isServing;
- (void)restartAsync;
- (void)setLaunchAtStartup:(BOOL)a0;
- (void)startSyncing;
- (void)startWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (void)stopSyncing;
- (void)stopWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (BOOL)synchronizeNow;

@end
