@interface NetworkTimeClient : NSObject

+ (id)sharedNetworkTimeClient;

- (id)server;
- (void)setServer:(id)a0;
- (void)start;
- (BOOL)isRunning;
- (void)stop;
- (BOOL)isSyncing;
- (id)servers;
- (void)restart;
- (BOOL)isServing;
- (void)restartAsync;
- (void)setLaunchAtStartup:(BOOL)a0;
- (void)setServers:(id)a0;
- (void)startSyncing;
- (void)startWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (void)stopSyncing;
- (void)stopWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (BOOL)synchronizeNow;

@end
