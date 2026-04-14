@interface NetworkTimeClient : NSObject

+ (id)sharedNetworkTimeClient;

- (void)setServer:(id)a0;
- (id)server;
- (void)start;
- (void)stop;
- (BOOL)isRunning;
- (id)servers;
- (void)restart;
- (void)setServers:(id)a0;
- (void)startWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (void)stopWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (void)startSyncing;
- (void)stopSyncing;
- (void)setLaunchAtStartup:(BOOL)a0;
- (BOOL)isSyncing;
- (BOOL)isServing;
- (void)restartAsync;
- (BOOL)synchronizeNow;

@end
