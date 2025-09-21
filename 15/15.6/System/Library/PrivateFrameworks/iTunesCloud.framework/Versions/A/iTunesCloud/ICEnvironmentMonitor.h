@class NSHashTable, NSString, CoreTelephonyClient, NWPathEvaluator, CTXPCServiceSubscriptionContext, NSDictionary, NSObject, NWNetworkOfInterestManager, NSMutableSet, CWFInterface;
@protocol OS_dispatch_queue;

@interface ICEnvironmentMonitor : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate, NWNetworkOfInterestManagerDelegate> {
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

@property (readonly, nonatomic, getter=isCharging) char charging;
@property (readonly, nonatomic) long long networkType;
@property (readonly, nonatomic) long long lastKnownNetworkType;
@property (readonly, nonatomic) NSDictionary *signalStrength;
@property (readonly, nonatomic) NSDictionary *signalInfo;
@property (readonly, nonatomic, getter=isRemoteServerReachable) char remoteServerReachable;
@property (readonly, nonatomic, getter=isRemoteServerLikelyReachable) char remoteServerLikelyReachable;
@property (readonly, nonatomic) unsigned long long currentNetworkLinkQuality;
@property (readonly, nonatomic, getter=isCurrentNetworkLinkHighQuality) char currentNetworkLinkHighQuality;
@property (readonly, nonatomic, getter=isCurrentNetworkLinkExpensive) char currentNetworkLinkExpensive;
@property (readonly, nonatomic, getter=isWiFiAssociated) char wifiAssociated;
@property (readonly, nonatomic, getter=isEthernetWired) char ethernetWired;
@property (readonly, nonatomic, getter=isWiFiActive) char wiFiActive;
@property (readonly, nonatomic, getter=isNetworkConstrained) char networkConstrained;
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
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cellMonitorUpdate:(id)a0 info:(id)a1;
- (void)connectionStateChanged:(id)a0 connection:(int)a1 dataConnectionStatusInfo:(id)a2;
- (void)currentDataSimChanged:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)displayStatusChanged:(id)a0 status:(id)a1;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (void)didStartTrackingNOI:(id)a0;
- (void)didStopTrackingAllNOIs:(id)a0;
- (void)didStopTrackingNOI:(id)a0;
- (void)_handleApplicationDidEnterForegroundNotification:(id)a0;
- (long long)_networkTypeFromWatchCarousel;
- (void)_notifyObserversEnvironmentMonitorDidChangeTelephonyStatus;
- (long long)_onQueue_currentCellularLinkQuality;
- (long long)_onQueue_currentNetworkType;
- (char)_onQueue_isWiFiAssociated;
- (void)_onQueue_loadInitialThermalLevel;
- (char)_onQueue_networkConstrained;
- (void)_onQueue_updateNetworkReachabilityAndNotifyObservers:(char)a0;
- (void)_onQueue_updatePowerStateNotifyingObservers:(char)a0;
- (void)_onQueue_updateTelephonyStateAndNotifyObservers:(char)a0;
- (void)_onQueue_updateThermalLevelWithToken:(int)a0;
- (char)isWifiActive;

@end
