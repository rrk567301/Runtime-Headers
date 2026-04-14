@interface ADMNetworkTimeClient : NSObject

+ (id)sharedNetworkTimeClient;

- (void)stop;
- (void)setServers:(id)a0;
- (BOOL)isRunning;
- (void)setServer:(id)a0;
- (void)restart;
- (id)servers;
- (id)server;
- (void)start;
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
