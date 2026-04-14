@class NSXPCConnection;

@interface MIBUClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)_setupConnection;
- (void)dealloc;
- (BOOL)_isMac;
- (void)shutdown:(id *)a0;
- (BOOL)isInPalletUpdateMode:(id *)a0;
- (id)loopbackServerURL:(id *)a0;
- (BOOL)_isIPad;
- (BOOL)_isOnLockScreen;
- (void)eapConfigurationWithCompletion:(id /* block */)a0;
- (BOOL)_isActivated:(id *)a0;
- (void)acquireDarkWakeAssertionIfNeeded:(id *)a0;
- (void)connectToWiFi:(id *)a0;
- (void)installFactoryAsset:(id *)a0;
- (BOOL)isInBoxUpdateMode:(id *)a0;
- (void)isLowPowerModeSetWithCompletion:(id /* block */)a0;
- (void)requestAndVerifyTatsuTicketWithApNonce:(id)a0 outError:(id *)a1;
- (void)setLowPowerModeWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)stopWiFiMonitor:(id *)a0;
- (void)terminateInBoxUpdateWithCompletion:(id /* block */)a0;
- (void)vendApTicketForTargetOSIfNeeded:(id)a0 outError:(id *)a1;

@end
