@class NSHashTable, NSString, CoreTelephonyClient, NWPathEvaluator, CTXPCServiceSubscriptionContext, NSDictionary, NSObject, NWNetworkOfInterestManager, NSMutableSet, CWFInterface;
@protocol OS_dispatch_queue;

@interface ICEnvironmentMonitor : NSObject <NWNetworkOfInterestManagerDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_observers;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _observersLock;
    NWPathEvaluator *_networkPathEvaluator;
    int _thermalNotificationToken;
    CoreTelephonyClient *_telephonyClient;
    int _telephonyStatusIndicator;
    CTXPCServiceSubscriptionContext *_dataSubscriptionContext;
    NSDictionary *_cellSignalInfo;
    CWFInterface *_wifiInterface;
    NWNetworkOfInterestManager *_noiManager;
    NSMutableSet *_networksOfInterest;
    int _batteryNotificationToken;
    int _powerSourceNotificationToken;
}

@property (class, readonly, nonatomic) ICEnvironmentMonitor *sharedMonitor;

@property (readonly, nonatomic, getter=isCharging) BOOL charging;
@property (readonly, nonatomic) long long networkType;
@property (readonly, nonatomic) long long lastKnownNetworkType;
@property (readonly, nonatomic) NSDictionary *signalStrength;
@property (readonly, nonatomic) NSDictionary *signalInfo;
@property (readonly, nonatomic, getter=isRemoteServerReachable) BOOL remoteServerReachable;
@property (readonly, nonatomic, getter=isRemoteServerLikelyReachable) BOOL remoteServerLikelyReachable;
@property (readonly, nonatomic) unsigned long long currentNetworkLinkQuality;
@property (readonly, nonatomic, getter=isCurrentNetworkLinkHighQuality) BOOL currentNetworkLinkHighQuality;
@property (readonly, nonatomic, getter=isCurrentNetworkLinkExpensive) BOOL currentNetworkLinkExpensive;
@property (readonly, nonatomic, getter=isWiFiAssociated) BOOL wifiAssociated;
@property (readonly, nonatomic, getter=isEthernetWired) BOOL ethernetWired;
@property (readonly, nonatomic, getter=isWiFiActive) BOOL wiFiActive;
@property (readonly, nonatomic, getter=isNetworkConstrained) BOOL networkConstrained;
@property (readonly, nonatomic) unsigned long long currentThermalLevel;
@property (readonly, nonatomic) long long currentThermalPressureLevel;
@property (readonly, nonatomic) long long currentThermalState;
@property (readonly, nonatomic) double currentBatteryLevel;
@property (readonly, copy, nonatomic) NSString *telephonyOperatorName;
@property (readonly, copy, nonatomic) NSString *telephonyRegistrationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)didStartTrackingNOI:(id)a0;
- (void)didStopTrackingNOI:(id)a0;
- (void)didStopTrackingAllNOIs:(id)a0;
- (void)_handleApplicationDidEnterForegroundNotification:(id)a0;
- (BOOL)isWifiActive;
- (void)_onQueue_updateNetworkReachabilityAndNotifyObservers:(BOOL)a0;
- (void)_onQueue_updateThermalLevelWithToken:(int)a0;
- (void)_onQueue_loadInitialThermalLevel;
- (void)_notifyObserversEnvironmentMonitorDidChangeTelephonyStatus;
- (void)_onQueue_updatePowerStateNotifyingObservers:(BOOL)a0;
- (long long)_onQueue_currentNetworkType;
- (long long)_networkTypeFromWatchCarousel;
- (BOOL)_onQueue_networkConstrained;
- (void)_onQueue_updateTelephonyStateAndNotifyObservers:(BOOL)a0;
- (long long)_onQueue_currentCellularLinkQuality;
- (BOOL)_onQueue_isWiFiAssociated;

@end
