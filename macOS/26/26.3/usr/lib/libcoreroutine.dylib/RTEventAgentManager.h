@class RTPlatform, NSString, NSXPCConnection;

@interface RTEventAgentManager : RTXPCListener <RTEventAgentDaemonProtocol>

@property (retain, nonatomic) NSXPCConnection *pluginConnection;
@property (retain, nonatomic) RTPlatform *platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlatform:(id)a0;
- (void)checkin;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setup;
- (void)_setup;
- (void).cxx_destruct;
- (void)dealloc;
- (void)launchDaemonWithRestorationIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)_launchDaemonWithRestorationIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)onLaunchDaemonWithRestorationIdentifierFromDefaults;

@end
