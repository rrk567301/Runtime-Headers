@class NSString, CUTWeakReference, PCInterfaceUsabilityMonitor, NSObject;
@protocol PCInterfaceUsabilityMonitorDelegate, OS_dispatch_queue;

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    NSString *_demoOverrideInterface;
    int _previousLinkQuality;
    char _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    PCInterfaceUsabilityMonitor *_monitor;
}

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
@property (readonly, nonatomic) int currentRAT;
@property (readonly, nonatomic) char isLTEWithCDRX;
@property (readonly, nonatomic) unsigned long long interface5GMode;
@property (readonly, nonatomic) struct __CFString { } *wwanInterfaceName;
@property (readonly, nonatomic) NSString *networkCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setThresholdOffTransitionCount:(unsigned long long)a0;
- (void)_addMonitor;
- (void)_callDelegateOnIvarQueueWithBlock:(id /* block */)a0;
- (void)_forwardConfigurationOnIvarQueue;
- (int)_linkQualityOnIvarQueue;
- (id)initWithDelegateQueue:(id)a0;
- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (void)interfaceReachabilityChanged:(id)a0;
- (void)setTrackUsability:(char)a0;
- (void)setTrackedTimeInterval:(double)a0;

@end
