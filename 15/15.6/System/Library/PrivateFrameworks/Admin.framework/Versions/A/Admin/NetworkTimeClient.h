@interface NetworkTimeClient : NSObject

+ (id)sharedNetworkTimeClient;

- (void)setServer:(id)a0;
- (void)start;
- (char)isRunning;
- (void)stop;
- (char)isSyncing;
- (id)server;
- (id)servers;
- (void)restart;
- (char)isServing;
- (void)restartAsync;
- (void)setLaunchAtStartup:(char)a0;
- (void)setServers:(id)a0;
- (void)startSyncing;
- (void)startWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (void)stopSyncing;
- (void)stopWithAuthorization:(struct AuthorizationOpaqueRef { } *)a0;
- (char)synchronizeNow;

@end
