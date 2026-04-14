@class NSString, CUTWeakReference, PCInterfaceUsabilityMonitor, NSObject;
@protocol PCInterfaceUsabilityMonitorDelegate, OS_dispatch_queue;

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    NSString *_demoOverrideInterface;
    int _previousLinkQuality;
    BOOL _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    PCInterfaceUsabilityMonitor *_monitor;
}

@property (readonly, nonatomic) BOOL isRadioHot;
@property (nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate;
@property (readonly, nonatomic) long long interfaceIdentifier;
@property (readonly, nonatomic) int linkQuality;
@property (readonly, nonatomic) BOOL isInterfaceUsable;
@property (readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property (readonly, nonatomic) BOOL isInternetReachable;
@property (readonly, retain, nonatomic) NSString *linkQualityString;
@property (readonly, nonatomic) BOOL isPoorLinkQuality;
@property (readonly, nonatomic) BOOL isBadLinkQuality;
@property (readonly, nonatomic) BOOL isNetworkingPowerExpensiveToUse;
@property (readonly, nonatomic) long long interfaceConstraint;
@property (readonly, nonatomic) int currentRAT;
@property (readonly, nonatomic) BOOL isLTEWithCDRX;
@property (readonly, nonatomic) unsigned long long interface5GMode;
@property (readonly, nonatomic) struct __CFString { } *wwanInterfaceName;
@property (readonly, nonatomic) NSString *networkCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTrackUsability:(BOOL)a0;
- (void)setTrackedTimeInterval:(double)a0;
- (void)_callDelegateOnIvarQueueWithBlock:(id /* block */)a0;
- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (id)initWithDelegateQueue:(id)a0;
- (void)interfaceReachabilityChanged:(id)a0;
- (void).cxx_destruct;
- (void)_forwardConfigurationOnIvarQueue;
- (void)dealloc;
- (void)_addMonitor;
- (int)_linkQualityOnIvarQueue;
- (void)setThresholdOffTransitionCount:(unsigned long long)a0;

@end
