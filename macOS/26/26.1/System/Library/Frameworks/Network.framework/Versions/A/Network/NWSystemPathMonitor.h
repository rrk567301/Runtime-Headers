@class NSMutableDictionary, NWPathEvaluator, NWMonitor, NSObject, RBSProcessMonitor;
@protocol OS_dispatch_source, OS_nw_interface_use_observer;

@interface NWSystemPathMonitor : NSObject

@property (retain) NWMonitor *vpnMonitor;
@property (retain) NWPathEvaluator *primaryEvaluator;
@property int vpnNotifyToken;
@property int symptomsNotifyToken;
@property (retain) RBSProcessMonitor *processMonitor;
@property (retain) NSMutableDictionary *perAppVPNEvaluators;
@property (retain) NSObject<OS_dispatch_source> *smoothingTimer;
@property void *fallbackWatcher;
@property (retain) NSObject<OS_dispatch_source> *mptcpWatcher;
@property (retain) NSObject<OS_nw_interface_use_observer> *interfaceUseObserver;
@property (nonatomic, getter=isVPNActive) BOOL vpnActive;
@property (nonatomic, getter=isWiFiPrimary) BOOL wifiPrimary;
@property (nonatomic, getter=isEthernetPrimary) BOOL ethernetPrimary;
@property (nonatomic) BOOL interfaceInUse;

+ (id)sharedSystemPathMonitor;

- (void)registerForSymptomsFallbackNotification;
- (void)stateUpdated:(id)a0 forProcess:(id)a1;
- (void)updateVPNMonitor;
- (void)updateFlags;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stopWatchingApplicationStates;
- (void)dealloc;
- (BOOL)getSymptomsFallback;
- (void)registerForVPNNotifications;
- (void).cxx_destruct;
- (void)startWatchingApplicationStates;
- (void)eventFired;
- (id)init;

@end
