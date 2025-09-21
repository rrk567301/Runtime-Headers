@class CTXPCServiceSubscriptionContext, NSString, CUTWeakReference, PCInterfaceUsabilityMonitor, NSObject, CoreTelephonyClient;
@protocol PCInterfaceUsabilityMonitorDelegate, OS_dispatch_queue;

@interface PCWWANUsabilityMonitor : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    char _isInCall;
    char _isInHighPowerState;
    char _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSString *_interfaceName;
    PCInterfaceUsabilityMonitor *_interfaceMonitor;
    unsigned int _currentDataBearerSoMask;
    int _powerlogCDRXToken;
    CoreTelephonyClient *_ctClient;
    int _wwanContextID;
    NSObject<OS_dispatch_queue> *_ctServerQueue;
    CTXPCServiceSubscriptionContext *_currentDataSimContext;
}

@property (readonly, nonatomic) int currentRAT;
@property (readonly, nonatomic) char isLTEWithCDRX;
@property (readonly, nonatomic) unsigned long long interface5GMode;
@property (readonly, nonatomic) struct __CFString { } *wwanInterfaceName;
@property (readonly, nonatomic) NSString *networkCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char isRadioHot;
@property (nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate;
@property (readonly, nonatomic) long long interfaceIdentifier;
@property (readonly, nonatomic) int linkQuality;
@property (readonly, nonatomic) char isInterfaceUsable;
@property (readonly, nonatomic) char isInterfaceHistoricallyUsable;
@property (readonly, nonatomic) char isInternetReachable;
@property (readonly, retain, nonatomic) NSString *linkQualityString;
@property (readonly, nonatomic) char isPoorLinkQuality;
@property (readonly, nonatomic) char isBadLinkQuality;
@property (readonly, nonatomic) char isNetworkingPowerExpensiveToUse;
@property (readonly, nonatomic) long long interfaceConstraint;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setThresholdOffTransitionCount:(unsigned long long)a0;
- (void)_adjustInterfaceNameForWWANContextID:(int)a0 interfaceName:(id)a1 forContext:(id)a2;
- (void)_callDelegateOnIvarQueueWithBlock:(id /* block */)a0;
- (id)_currentDataSimContext;
- (void)_forwardConfigurationOnIvarQueue;
- (char)_isCurrentDataSimContextOnIvarQueue:(id)a0;
- (void)_setupWWANMonitor;
- (id)initWithDelegateQueue:(id)a0;
- (void)interfaceConstraintChanged:(id)a0;
- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (void)interfaceReachabilityChanged:(id)a0;
- (void)setTrackUsability:(char)a0;
- (void)setTrackedTimeInterval:(double)a0;

@end
