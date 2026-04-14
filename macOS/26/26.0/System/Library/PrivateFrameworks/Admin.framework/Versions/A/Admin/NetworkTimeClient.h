@interface NetworkTimeClient : NSObject

+ (id)sharedNetworkTimeClient;

- (id)server;
- (void)start;
- (void)restart;
- (void)setServer:(id)a0;
- (void)stop;
- (BOOL)isRunning;
- (BOOL)isSyncing;
- (id)servers;
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
