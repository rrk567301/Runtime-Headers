@class NSRecursiveLock, NSString, NSMapTable, NSTimer, CTXPCServiceSubscriptionContext, PCSimpleTimer, CoreTelephonyClient;

@interface PCPersistentInterfaceManager : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceMonitorDelegate> {
    NSRecursiveLock *_lock;
    NSMapTable *_delegatesAndQueues;
    struct __CFSet { } *_WiFiAutoAssociationDelegates;
    PCSimpleTimer *_WiFiAutoAssociationDisableTimer;
    struct __CFSet { } *_wakeOnWiFiDelegates;
    PCSimpleTimer *_wakeOnWiFiDisableTimer;
    void *_interfaceAssertion;
    NSString *_WWANInterfaceName;
    BOOL _isWWANInterfaceUp;
    NSTimer *_inCallWWANOverrideTimer;
    BOOL _isWWANInterfaceDataActive;
    BOOL _ctIsWWANInHomeCountry;
    BOOL _isWWANInterfaceSuspended;
    BOOL _isPowerStateDetectionSupported;
    BOOL _isWWANInterfaceInProlongedHighPowerState;
    BOOL _isWWANInterfaceActivationPermitted;
    double _lastActivationTime;
    BOOL _isInCall;
    BOOL _isWakeOnWiFiSupported;
    BOOL _isWakeOnWiFiEnabled;
    CoreTelephonyClient *_ctClient;
    CTXPCServiceSubscriptionContext *_currentDataSimContext;
    void *_ctServerConnection;
}

@property (readonly) BOOL isPowerStateDetectionSupported;
@property (readonly) BOOL isWWANInterfaceInProlongedHighPowerState;
@property (readonly) BOOL isInCall;
@property (readonly) BOOL isWWANInterfaceActivationPermitted;
@property (readonly) BOOL areAllNetworkInterfacesDisabled;
@property (readonly, nonatomic) BOOL isWWANInterfaceUp;
@property (readonly, nonatomic) BOOL isWWANInHomeCountry;
@property (readonly, nonatomic) BOOL isWWANBetterThanWiFi;
@property (readonly, nonatomic) BOOL isWWANInterfaceSuspended;
@property (readonly, nonatomic) BOOL hasWWANStatusIndicator;
@property (readonly, nonatomic) BOOL doesWWANInterfaceExist;
@property (readonly, nonatomic) NSString *WWANInterfaceName;
@property (readonly, nonatomic) BOOL isInternetReachableViaWiFi;
@property (readonly, nonatomic) BOOL isWakeOnWiFiSupported;
@property (readonly, nonatomic) BOOL isInternetReachable;
@property (readonly, nonatomic) BOOL allowBindingToWWAN;
@property (readonly, nonatomic) NSString *currentLinkQualityString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleMachMessage:(void *)a0;
- (void)removeDelegate:(id)a0;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWiFiAutoAssociation;
- (void)_ctConnectionAttempt;
- (void)_mainThreadCTConnectionAttempt;
- (void)_adjustWakeOnWiFi;
- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (void)interfaceReachabilityChanged:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)_createCTConnection;
- (void)_inCallWWANOverrideTimerFired;
- (void)_clearInCallWWANOverrideTimerLocked;
- (id)_nonCellularMonitor;
- (void)_updateWWANInterfaceUpStateLocked;
- (void)_updateWWANInterfaceUpState;
- (void)_updateCTIsWWANInHomeCountry:(BOOL)a0 isWWANInterfaceDataActive:(BOOL)a1;
- (BOOL)_wwanIsPoorLinkQuality;
- (BOOL)_wifiIsPoorLinkQuality;
- (void)_scheduleCalloutsForSelector:(SEL)a0;
- (BOOL)_isWWANInHomeCountryLocked;
- (BOOL)_isInternetReachableLocked;
- (BOOL)_isWiFiUsable;
- (void)cutWiFiManagerDeviceAttached:(id)a0;
- (BOOL)_wantsWWANInterfaceAssertion;
- (void)_updateWWANInterfaceAssertions;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)enableWiFiAutoAssociation:(BOOL)a0 forDelegate:(id)a1;
- (void)enableWakeOnWiFi:(BOOL)a0 forDelegate:(id)a1;
- (BOOL)_wantsWakeOnWiFiEnabled;
- (void)_adjustWakeOnWiFiLocked;

@end
