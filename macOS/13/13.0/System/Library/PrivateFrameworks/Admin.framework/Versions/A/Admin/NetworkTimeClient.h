@interface NetworkTimeClient : NSObject

+ (id)sharedNetworkTimeClient;

- (void)setServer:(id)a0;
- (id)server;
- (void)start;
- (BOOL)isRunning;
- (void)stop;
- (id)servers;
- (void)restart;
- (void)startWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (void)stopWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (void)setServers:(id)a0;
- (void)startSyncing;
- (void)stopSyncing;
- (void)setLaunchAtStartup:(BOOL)a0;
- (BOOL)isSyncing;
- (BOOL)isServing;
- (void)restartAsync;
- (BOOL)synchronizeNow;

@end
