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
    char _isWWANInterfaceUp;
    NSTimer *_inCallWWANOverrideTimer;
    char _isWWANInterfaceDataActive;
    char _ctIsWWANInHomeCountry;
    char _isWWANInterfaceSuspended;
    char _isPowerStateDetectionSupported;
    char _isWWANInterfaceInProlongedHighPowerState;
    char _isWWANInterfaceActivationPermitted;
    double _lastActivationTime;
    char _isInCall;
    char _isWakeOnWiFiSupported;
    char _isWakeOnWiFiEnabled;
    CoreTelephonyClient *_ctClient;
    CTXPCServiceSubscriptionContext *_currentDataSimContext;
    void *_ctServerConnection;
}

@property (readonly) char isPowerStateDetectionSupported;
@property (readonly) char isWWANInterfaceInProlongedHighPowerState;
@property (readonly) char isInCall;
@property (readonly) char isWWANInterfaceActivationPermitted;
@property (readonly) char areAllNetworkInterfacesDisabled;
@property (readonly, nonatomic) char isWWANInterfaceUp;
@property (readonly, nonatomic) char isWWANInHomeCountry;
@property (readonly, nonatomic) char isWWANBetterThanWiFi;
@property (readonly, nonatomic) char isWWANInterfaceSuspended;
@property (readonly, nonatomic) char hasWWANStatusIndicator;
@property (readonly, nonatomic) char doesWWANInterfaceExist;
@property (readonly, nonatomic) NSString *WWANInterfaceName;
@property (readonly, nonatomic) char isInternetReachableViaWiFi;
@property (readonly, nonatomic) char isWakeOnWiFiSupported;
@property (readonly, nonatomic) char isInternetReachable;
@property (readonly, nonatomic) char allowBindingToWWAN;
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
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWakeOnWiFi;
- (void)_adjustWakeOnWiFiLocked;
- (void)_clearInCallWWANOverrideTimerLocked;
- (void)_createCTConnection;
- (void)_ctConnectionAttempt;
- (void)_inCallWWANOverrideTimerFired;
- (char)_isInternetReachableLocked;
- (char)_isWWANInHomeCountryLocked;
- (char)_isWiFiUsable;
- (void)_mainThreadCTConnectionAttempt;
- (id)_nonCellularMonitor;
- (void)_scheduleCalloutsForSelector:(SEL)a0;
- (void)_updateCTIsWWANInHomeCountry:(char)a0 isWWANInterfaceDataActive:(char)a1;
- (void)_updateWWANInterfaceAssertions;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_updateWWANInterfaceUpState;
- (void)_updateWWANInterfaceUpStateLocked;
- (char)_wantsWWANInterfaceAssertion;
- (char)_wantsWakeOnWiFiEnabled;
- (char)_wifiIsPoorLinkQuality;
- (char)_wwanIsPoorLinkQuality;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)cutWiFiManagerDeviceAttached:(id)a0;
- (void)enableWakeOnWiFi:(char)a0 forDelegate:(id)a1;
- (void)enableWiFiAutoAssociation:(char)a0 forDelegate:(id)a1;
- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (void)interfaceReachabilityChanged:(id)a0;

@end
