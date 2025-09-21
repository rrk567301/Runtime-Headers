@class RTPlatform, NSString, NSXPCConnection;

@interface RTEventAgentManager : RTXPCListener <RTEventAgentDaemonProtocol>

@property (retain, nonatomic) NSXPCConnection *pluginConnection;
@property (retain, nonatomic) RTPlatform *platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkin;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setup;
- (id)initWithPlatform:(id)a0;
- (void)_setup;
- (void)dealloc;
- (id)init;
- (void)_launchDaemonWithRestorationIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)launchDaemonWithRestorationIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)onLaunchDaemonWithRestorationIdentifierFromDefaults;

@end
