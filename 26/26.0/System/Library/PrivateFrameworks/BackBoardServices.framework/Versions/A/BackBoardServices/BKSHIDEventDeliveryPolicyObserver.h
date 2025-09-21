@class NSHashTable, BKSHIDEventDeliveryPolicy, NSString, BKSHIDEventObserver, BKSHIDEventDeferringSelectionPathIdentifier, BKSHIDEventDisplay, NSSet, NSObject, BKSHIDEventDeferringToken, BKSHIDEventDeferringEnvironment;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface BKSHIDEventDeliveryPolicyObserver : NSObject <BSDescriptionStreaming, BKSHIDEventDeferringObserving> {
    BKSHIDEventObserver *_observer;
    id<BSInvalidatable> _observingAssertion;
    NSObject<OS_dispatch_queue> *_asyncObserverCalloutQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BKSHIDEventDisplay *_lock_display;
    BKSHIDEventDeferringEnvironment *_lock_environment;
    BKSHIDEventDeferringToken *_lock_token;
    BKSHIDEventDeferringSelectionPathIdentifier *_lock_selectionPathIdentifier;
    NSSet *_lock_observations;
    BKSHIDEventDeliveryPolicy *_lock_currentPolicy;
    NSHashTable *_lock_observers;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *asyncObserverCalloutQueue;
@property (readonly, nonatomic) BOOL canReceiveEvents;
@property (readonly, nonatomic) long long policyStatus;
@property (readonly, nonatomic) BOOL finalStringTokenInChain;
@property (copy, nonatomic) BKSHIDEventDisplay *display;
@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (copy, nonatomic) BKSHIDEventDeferringSelectionPathIdentifier *selectionPathIdentifier;
@property (copy, nonatomic) BKSHIDEventDeferringToken *deferringToken;
@property (readonly, nonatomic) BKSHIDEventDeliveryPolicy *currentPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_lock_description;
- (void)dealloc;
- (void)appendDescriptionToStream:(id)a0;
- (void)_lock_appendDescriptionToStream:(id)a0;
- (id)_lock_updatePolicyWithBlock:(id /* block */)a0;
- (id)_lock_effectivePolicyObservation;
- (void)removeObserver:(id)a0;
- (id)_initWithObserver:(id)a0;
- (void)_replacePolicySpecificationObject:(id)a0 withObject:(id)a1 replaceIvarBlock:(id /* block */)a2;
- (id)init;
- (id)_lock_buildCurrentPolicy;
- (void)addObserver:(id)a0;
- (void)_notifyAsyncObservers:(id)a0 didUpdatePolicy:(id)a1;
- (void).cxx_destruct;
- (void)deferringResolutionsChanged;

@end
