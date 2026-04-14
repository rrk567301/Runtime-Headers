@class RWIRelay, NSObject;
@protocol OS_xpc_object;

@interface RWIRelayDelegateMac : NSObject <RWIRelayDelegate> {
    RWIRelay *_relay;
    NSObject<OS_xpc_object> *_xpcClientConnectionListener;
}

- (void).cxx_destruct;
- (BOOL)_connection:(id)a0 hasEntitlement:(const char *)a1;
- (void)relayInitialize:(id)a0;
- (void)relay:(id)a0 activateApplicationWithBundleIdentifier:(id)a1;
- (void)relayClientConnectionDidChange:(id)a0;
- (BOOL)relay:(id)a0 allowIncomingApplicationViaProxy:(struct { unsigned int x0[8]; })a1 pid:(int)a2;
- (void)relay:(id)a0 applicationUpdated:(id)a1;
- (void)relay:(id)a0 applicationConnected:(id)a1;
- (void)relay:(id)a0 applicationDisconnected:(id)a1;
- (BOOL)relay:(id)a0 allowIncomingApplicationConnection:(id)a1 bundleIdentifier:(id)a2;
- (id)relay:(id)a0 applicationInfoForIncomingConnection:(id)a1 bundleIdentifier:(id)a2;
- (void)relay:(id)a0 unhandledApplicationXPCMessage:(id)a1;
- (void)_handleIncomingConnectionEvent:(id)a0;
- (BOOL)_isProxyApplication:(id)a0;
- (BOOL)_allowApplication:(struct { unsigned int x0[8]; })a0 bundleIdentifier:(id)a1;
- (id)relaySetupResponseForClientConnection:(id)a0;

@end
