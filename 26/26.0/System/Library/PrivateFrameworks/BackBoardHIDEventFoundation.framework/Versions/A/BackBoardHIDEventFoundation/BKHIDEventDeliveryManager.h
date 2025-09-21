@class BKSHIDEventAuthenticationOriginator, BKSHIDEventSimpleProvenanceOriginator, BKSHIDEventDisplay, NSMutableDictionary, NSDictionary, BSMutableIntegerMap, NSMutableArray, BKEventDeferringGraph, NSSet, BKHIDEventDeliveryObserverService;
@protocol BKHIDEventBufferingHIDSystem, BSInvalidatable;

@interface BKHIDEventDeliveryManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _previousProvenanceTimestamp;
    id<BSInvalidatable> _chainsStateCapture;
    id<BSInvalidatable> _deferringRulesStateCapture;
    id<BSInvalidatable> _dispatchRootsStateCapture;
    id<BSInvalidatable> _graphStateCapture;
    NSMutableArray *_deliveryRoots;
    unsigned long long _deliveryRootsEventTypeMask;
    NSMutableArray *_keyCommandDeliveryRoots;
    NSMutableDictionary *_buffersByDispatchTarget;
    BKEventDeferringGraph *_deferringGraph;
    BSMutableIntegerMap *_bufferingPredicatesByPID;
    BSMutableIntegerMap *_clientsByPID;
    NSSet *_allObserverResolutions;
    NSMutableDictionary *_destinationCacheBySender;
}

@property (retain, nonatomic) BKHIDEventDeliveryObserverService *resolutionObserver;
@property (retain, nonatomic) id<BKHIDEventBufferingHIDSystem> bufferingDispatcher;
@property (readonly, nonatomic) NSDictionary *currentBuffersPerDispatchTarget;
@property (readonly, nonatomic) BKHIDEventDeliveryObserverService *observerService;
@property (retain, nonatomic) BKSHIDEventDisplay *mainDisplay;
@property (readonly, nonatomic) BKSHIDEventAuthenticationOriginator *authenticationOriginator;
@property (readonly, nonatomic) BKSHIDEventSimpleProvenanceOriginator *simpleProvenanceOriginator;

- (void)processDidTerminate:(int)a0;
- (id)destinationsForEvent:(struct __IOHIDEvent { } *)a0 sender:(id)a1;
- (void)setDispatchingRoots:(id)a0 forClientWithPID:(int)a1;
- (void)dealloc;
- (void)_server_submitLocalRuleChanges:(id)a0;
- (id)resolveDestinationsForEvent:(struct __IOHIDEvent { } *)a0 startingFromPID:(int)a1 deferringPredicate:(id)a2 senderDescriptor:(id)a3;
- (void)setModalityAssertions:(id)a0 forClientWithPID:(int)a1;
- (id)transactionAssertionWithReason:(id)a0;
- (BOOL)validateTarget:(id)a0 environment:(id)a1 event:(struct __IOHIDEvent { } *)a2 senderDescriptor:(id)a3;
- (id)sequenceForKeyCommand:(id)a0 sender:(id)a1 processor:(id)a2 dispatcher:(id)a3 additionalContext:(id)a4;
- (void)setEventBufferingPredicates:(id)a0 forClientWithPID:(int)a1;
- (void)_fireTimeoutForPID:(int)a0 bufferingPredicates:(id)a1 client:(id)a2;
- (id)init;
- (id)server_localDeliveryManager;
- (id)descriptionOfResolutionPathForEventDescriptor:(id)a0 senderDescriptor:(id)a1;
- (void)setConstraintAssertions:(id)a0 forClientWithPID:(int)a1;
- (id)deliveryChainsForDeferringTarget:(id)a0 display:(id)a1 environment:(id)a2 event:(struct __IOHIDEvent { } *)a3;
- (id)dispatchDiscreteEventsForReason:(id)a0 withRules:(id)a1;
- (void)setKeyCommandRoots:(id)a0 forClientWithPID:(int)a1;
- (id)deliveryGraphDescription;
- (id)destinationsStartingFromPID:(int)a0 deferringPredicate:(id)a1;
- (void)requestSelectionChanges:(id)a0 forClientWithPID:(int)a1;
- (id)destinationsForKeyCommand:(id)a0 sender:(id)a1;
- (id)initWithObserverService:(id)a0;
- (id)deferEventsMatchingPredicate:(id)a0 toTarget:(id)a1 withReason:(id)a2;
- (void)reevaluateBufferingWithContext:(id)a0;
- (id)_test_deliveryRootForIdentifier:(id)a0;
- (void)_server_setLocalDeliveryManager:(id)a0;
- (void)setKeyCommandsRegistrations:(id)a0 forClientWithPID:(int)a1;
- (id)connectionDescriptionForDeferringRuleIdentity:(id)a0;
- (id)deliveryChainsDescription;
- (id)sequenceForFirstEvent:(struct __IOHIDEvent { } *)a0 sender:(id)a1 processor:(id)a2 dispatcher:(id)a3 additionalContext:(id)a4;
- (id)descriptionOfResolutionPathForKeyCommand:(id)a0 senderDescriptor:(id)a1;
- (void).cxx_destruct;
- (void)setDeferringRules:(id)a0 forClientWithPID:(int)a1;

@end
