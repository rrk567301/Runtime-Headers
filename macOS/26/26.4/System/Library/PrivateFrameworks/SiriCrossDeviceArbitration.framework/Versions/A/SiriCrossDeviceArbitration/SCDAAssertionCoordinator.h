@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, SCDAAssertionCoordinatorDelegate;

@interface SCDAAssertionCoordinator : NSObject <SCDAInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    id<SCDAAssertionCoordinatorDelegate> _delegate;
    _Atomic long long _numberOfAssertions;
    NSMutableDictionary *_assertionsByUUID;
    _Atomic long long _numberOfActiveAssertions;
    NSMutableSet *_activeAssertionUUIDs;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)relinquishAsertionsPassingTest:(id /* block */)a0 error:(id)a1;
- (void)barrier:(id /* block */)a0;
- (void)relinquishAsertionsPassingTest:(id /* block */)a0 context:(id)a1;
- (void)_activateAssertionWithUUID:(id)a0;
- (unsigned long long)numberOfActiveAssertions;
- (void)_deactivateAndRemoveAssertionWithUUID:(id)a0 context:(id)a1 error:(id)a2 options:(unsigned long long)a3;
- (void)relinquishAssertionWithUUID:(id)a0 context:(id)a1 options:(unsigned long long)a2;
- (void)_invalidate;
- (void)relinquishAssertionWithUUID:(id)a0 error:(id)a1 options:(unsigned long long)a2;
- (id)acquireRelinquishableAssertionWithContext:(id)a0 relinquishmentHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)getPendingAndActiveAssertionsWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (id)initWithIdentifier:(id)a0 queue:(id)a1 delegate:(id)a2;
- (unsigned long long)numberOfPendingAndActiveAssertions;
- (void)_addAssertion:(id)a0;
- (void)dealloc;
- (void)getActiveAssertionsWithCompletion:(id /* block */)a0;

@end
