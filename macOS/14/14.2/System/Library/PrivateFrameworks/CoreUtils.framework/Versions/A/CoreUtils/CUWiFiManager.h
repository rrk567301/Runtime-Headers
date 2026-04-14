@class NSString, NSArray, CWWiFiClient, NSObject, CURetrier;
@protocol OS_dispatch_queue;

@interface CUWiFiManager : NSObject <CWEventDelegate, CWInternalEventDelegate> {
    BOOL _activateCalled;
    BOOL _activated;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    BOOL _updating;
    CWWiFiClient *_wifiMacClient;
    NSArray *_trafficPeersCurrent;
    BOOL _wifiAutoJoinDisabled;
    BOOL _wifiCriticalSetup;
    BOOL _wifiCriticalState;
    void *_wifiManager;
    BOOL _wifiManagerSetup;
    void *_wifiDevice;
    BOOL _wifiDeviceSetup;
    void *_wifiNetworkDisabled;
    CURetrier *_wifiRetrier;
    BOOL _wifiStateMonitorSetup;
    BOOL _infraDisabledChanged;
    BOOL _trafficPeerChanged;
    BOOL _wakeOnWirelessEnabledChanged;
}

@property (nonatomic) unsigned int controlFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL infraDisabled;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *trafficPeers;
@property (nonatomic) BOOL wakeOnWirelessEnabled;
@property (readonly, nonatomic) unsigned int wifiFlags;
@property (readonly, nonatomic) int wifiState;
@property (copy, nonatomic) id /* block */ wifiStateChangedHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_update;
- (void)_invalidated;
- (void)_interrupted;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)clientConnectionInterrupted;
- (void)joinDidStartForWiFiInterfaceWithName:(id)a0 ssid:(id)a1;
- (void)linkDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)modeDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)_updateTrafficPeersWithService:(unsigned int)a0;
- (void)_activateSafeInvokeBlock:(id /* block */)a0;
- (void)_updateInfraDisabled;
- (void)_updateTrafficPeers;
- (void)_updateWakeOnWireless;
- (void)_wifiEnsureStarted;
- (void)_wifiEnsureStopped;
- (unsigned int)_wifiFlagsUncached;
- (void)_wifiStateChanged;
- (int)_wifiStateUncached;
- (void)joinDidCompleteForWiFiInterfaceWithName:(id)a0 error:(id)a1;
- (void)performUpdate:(id /* block */)a0;

@end
