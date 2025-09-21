@class NSXPCConnection;

@interface MIBUClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void)_setupConnection;
- (void).cxx_destruct;
- (void)shutdown:(id *)a0;
- (BOOL)_isIPad;
- (BOOL)_isOnLockScreen;
- (void)eapConfigurationWithCompletion:(id /* block */)a0;
- (BOOL)_isActivated:(id *)a0;
- (void)connectToWiFi:(id *)a0;
- (BOOL)isInBoxUpdateMode:(id *)a0;
- (BOOL)isInPalletUpdateMode:(id *)a0;
- (void)isLowPowerModeSetWithCompletion:(id /* block */)a0;
- (id)loopbackServerURL:(id *)a0;
- (void)setLowPowerModeWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)stopWiFiMonitor:(id *)a0;
- (void)terminateInBoxUpdateWithCompletion:(id /* block */)a0;

@end
