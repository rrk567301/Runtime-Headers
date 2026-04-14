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

- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (void)interfaceReachabilityChanged:(id)a0;
- (void)handleMachMessage:(void *)a0;
- (void)cutWiFiManagerDeviceAttached:(id)a0;
- (void)_updateWWANInterfaceUpState;
- (void)_mainThreadCTConnectionAttempt;
- (void)_updateWWANInterfaceAssertions;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)_adjustWakeOnWiFiLocked;
- (void)_inCallWWANOverrideTimerFired;
- (void)_adjustWiFiAutoAssociation;
- (void)enableWakeOnWiFi:(BOOL)a0 forDelegate:(id)a1;
- (BOOL)_isWWANInHomeCountryLocked;
- (void)_updateCTIsWWANInHomeCountry:(BOOL)a0 isWWANInterfaceDataActive:(BOOL)a1;
- (void)_clearInCallWWANOverrideTimerLocked;
- (BOOL)_isInternetReachableLocked;
- (void).cxx_destruct;
- (BOOL)_isWiFiUsable;
- (void)_updateWWANInterfaceUpStateLocked;
- (id)_nonCellularMonitor;
- (BOOL)_wifiIsPoorLinkQuality;
- (BOOL)_wwanIsPoorLinkQuality;
- (void)_createCTConnection;
- (BOOL)_wantsWakeOnWiFiEnabled;
- (void)_adjustWakeOnWiFi;
- (void)removeDelegate:(id)a0;
- (void)_scheduleCalloutsForSelector:(SEL)a0;
- (void)_adjustWiFiAutoAssociationLocked;
- (BOOL)_wantsWWANInterfaceAssertion;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_ctConnectionAttempt;
- (id)init;
- (void)enableWiFiAutoAssociation:(BOOL)a0 forDelegate:(id)a1;
- (void)dealloc;

@end
