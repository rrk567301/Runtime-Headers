@class NSString, NSMutableDictionary;
@protocol GCGameIntentLauncherXPCServerInterface;

@interface GCGameIntentLauncherXPCProxyClient : NSObject <GCGameIntentLauncherService> {
    NSMutableDictionary *_servers;
}

@property (retain) id<GCGameIntentLauncherXPCServerInterface> server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)agentCheckIn:(id)a0 effectiveUserIdentifier:(unsigned int)a1;
- (void)consoleUserDidChange:(id)a0;
- (void)launchApplicationWithBundleIdentifier:(id)a0;
- (void)refreshActiveClient;
- (void)togglePlatformGamesLibrary;

@end
