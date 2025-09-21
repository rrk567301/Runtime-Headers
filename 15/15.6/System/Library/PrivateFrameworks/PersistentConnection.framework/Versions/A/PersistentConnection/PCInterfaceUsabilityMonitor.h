@class NSRecursiveLock, NSString, CUTWeakReference, NSObject, NSMutableArray;
@protocol OS_nw_path_evaluator, OS_nw_parameters, OS_nw_interface, OS_dispatch_queue, PCInterfaceUsabilityMonitorDelegate;

@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_scQueue;
    long long _interfaceIdentifier;
    CUTWeakReference *_delegateReference;
    NSObject<OS_nw_parameters> *_pathParameters;
    NSObject<OS_nw_path_evaluator> *_evaluator;
    NSObject<OS_nw_interface> *_lastInterface;
    NSObject<OS_nw_interface> *_lastDelegateInterface;
    char _isPathSatisfied;
    long long _interfaceConstraint;
    void *_dynamicStore;
    struct __CFString { } *_lqKey;
    int _linkQuality;
    char _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSMutableArray *_offTransitions;
    NSRecursiveLock *_recursiveLock;
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

+ (char)isBadLinkQuality:(int)a0;
+ (char)isPoorLinkQuality:(int)a0;
+ (id)stringForLinkQuality:(int)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setThresholdOffTransitionCount:(unsigned long long)a0;
- (void)_callDelegateWithBlock:(id /* block */)a0;
- (char)_createLinkQualityMonitor:(char)a0;
- (void)_createPathEvaluator;
- (void)_dynamicStoreCallback:(id)a0;
- (void)_dynamicStoreCallbackForKeys:(id)a0;
- (void)_flushStaleTransitions;
- (char)_isInterfaceHistoricallyUsable;
- (char)_isInterfaceUsable;
- (void)_pathUpdate:(id)a0;
- (void)_processLinkQualityUpdateWithChangedKey:(id)a0 updatedLinkQuality:(int)a1;
- (void)_unscheduleLinkQualityMonitor;
- (void)_unschedulePathEvaluator;
- (void)_updateOffTransitionsForLinkQualityChange;
- (void)_updatePathParameters;
- (id)currentInterfaceName;
- (id)initWithInterfaceIdentifier:(long long)a0 delegateQueue:(id)a1;
- (void)setTrackUsability:(char)a0;
- (void)setTrackedTimeInterval:(double)a0;

@end
