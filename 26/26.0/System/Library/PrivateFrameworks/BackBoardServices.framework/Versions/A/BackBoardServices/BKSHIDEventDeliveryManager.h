@class NSHashTable, NSString, NSArray, NSSet, NSMutableDictionary, NSDictionary, BSMutableIntegerMap, NSMutableArray, NSMutableSet, NSObject, BSServiceInitiatingConnection;
@protocol OS_dispatch_queue, BSInvalidatable, BKSHIDEventDeliveryManagerServerInterface;

@interface BKSHIDEventDeliveryManager : NSObject <BSDescriptionStreaming> {
    BSServiceInitiatingConnection *_serviceConnection;
    NSObject<OS_dispatch_queue> *_asyncResultQueue;
    id<BKSHIDEventDeliveryManagerServerInterface> _lock_remoteTargetSafeToMessage;
    NSMutableArray *_lock_pendingQueriesToBeExecutedInsideLockOnceActivationHappens;
    BOOL _forTesting;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_assertions;
    unsigned int _lock_discreteDispatchingSeed;
    NSMutableSet *_lock_discreteDispatchingRoots;
    NSSet *_lock_lastSentDiscreteDispatchingRoots;
    unsigned int _lock_keyCommandsDispatchingSeed;
    NSMutableSet *_lock_keyCommandsDispatchingRoots;
    NSSet *_lock_lastSentKeyCommandsDispatchingRoots;
    unsigned int _lock_deferringSeed;
    NSMutableArray *_lock_deferringRules;
    NSArray *_lock_lastSentDeferringRules;
    unsigned int _lock_bufferingSeed;
    NSMutableDictionary *_lock_bufferingPredicates;
    NSSet *_lock_lastSentBufferingPredicates;
    unsigned int _lock_modalityAssertSeed;
    NSMutableSet *_lock_modalityAsserts;
    NSSet *_lock_lastSentModalityAsserts;
    unsigned int _lock_constraintAssertSeed;
    NSMutableSet *_lock_constraintAsserts;
    NSSet *_lock_lastSentConstraintAsserts;
    NSMutableSet *_lock_selectionRequests;
    unsigned int _lock_keyCommandsRegistrationSeed;
    NSMutableDictionary *_lock_keyCommandsRegistrations;
    NSDictionary *_lock_lastSentKeyCommandsRegistrations;
    NSSet *_lock_lastSentSetOfKeyCommandsRegistrations;
    NSObject<OS_dispatch_queue> *_implicitFlushQueue;
    struct __CFBoolean { } *_lock_needsFlush;
    long long _lock_preventFlushingSeed;
    BSMutableIntegerMap *_lock_preventFlushingReasons;
    id<BSInvalidatable> _lock_implicitPreventFlushingAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)connectionDescriptionForDeferringRuleIdentity:(id)a0 result:(id /* block */)a1;
- (void)dealloc;
- (void)_lock_implicitFlush;
- (void)appendDescriptionToStream:(id)a0;
- (id)_lock_stateDescription;
- (void)_lock_flushIfNeeded;
- (id)dispatchKeyCommandsForReason:(id)a0 withRule:(id)a1;
- (void)_executeDescriptionFetch:(id /* block */)a0 result:(id /* block */)a1;
- (void)_lock_pendQuery:(id /* block */)a0;
- (void)changeSelectionPath:(id)a0 target:(id)a1 basis:(id)a2 ignoreModalities:(BOOL)a3;
- (id)transactionAssertionWithReason:(id)a0;
- (void)_lock_noteServerInterruption;
- (void)resolutionDescriptionForEventDescriptor:(id)a0 sender:(id)a1 result:(id /* block */)a2;
- (id)registerKeyCommands:(id)a0;
- (id)init;
- (void)deliveryChainsDescription:(id /* block */)a0;
- (id)bufferEventsMatchingPredicate:(id)a0 withReason:(id)a1;
- (id)dispatchDiscreteEventsForReason:(id)a0 withRules:(id)a1;
- (id)_lock_transactionAssertionWithReason:(id)a0;
- (id)_initWithConnectionFactory:(id)a0 forTesting:(BOOL)a1;
- (id)assertSelectionPath:(id)a0 target:(id)a1 imposesConstraint:(id)a2;
- (void)resolutionDescriptionForKeyCommand:(id)a0 sender:(id)a1 result:(id /* block */)a2;
- (id)deferEventsMatchingPredicate:(id)a0 toTarget:(id)a1 withReason:(id)a2;
- (void)connectionDescriptionForDeferringRuleWithSeed:(unsigned int)a0 pid:(int)a1 result:(id /* block */)a2;
- (void)deliveryGraphDescription:(id /* block */)a0;
- (id)assertSelectionPath:(id)a0 target:(id)a1 hasModality:(id)a2 basis:(id)a3;
- (void)_syncServiceFlushState;
- (id)deferEventsMatchingPredicate:(id)a0 restrictedToEventDescriptors:(id)a1 toTarget:(id)a2 withReason:(id)a3;
- (void).cxx_destruct;

@end
