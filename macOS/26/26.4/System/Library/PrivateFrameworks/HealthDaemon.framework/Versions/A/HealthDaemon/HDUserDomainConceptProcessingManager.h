@class HDProfile, HDAssertion;

@interface HDUserDomainConceptProcessingManager : NSObject <HDInternalOntologyDatabaseAvailabilityObserver, HDOntologyContentShardImportObserver, HDProfileReadyObserver, HDUserDomainConceptObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _batchSize;
    long long _batchLimit;
    BOOL _hasScheduledProcessing;
    double _scheduledProcessingTimestamp;
    HDAssertion *_databaseAssertion;
    _Atomic BOOL _isDisabledForHealthDaemonLifetime;
}

@property (nonatomic) BOOL ignoresAutomaticProcessingTriggers;
@property (copy, nonatomic) id /* block */ unitTesting_userDomainConceptProcessingManagerDidFinishProcessing;
@property (readonly, weak, nonatomic) HDProfile *profile;

- (id)initWithProfile:(id)a0;
- (void)profileDidBecomeReady:(id)a0;
- (void)userDomainConceptManager:(id)a0 didUpdateUserDomainConcepts:(id)a1 maxAnchor:(long long)a2;
- (void)unitTesting_triggerUserDomainConceptProcessing;
- (void)unitTesting_overrideDefaultBatchLimit:(long long)a0;
- (void)userDomainConceptManager:(id)a0 didJournalUserDomainConcepts:(id)a1;
- (void).cxx_destruct;
- (void)didImportOntologyShard;
- (id)init;
- (void)unitTesting_scheduleUserDomainConceptProcessing;
- (void)ontologyDatabaseDidBecomeAvailable:(BOOL)a0;
- (void)userDomainConceptManager:(id)a0 didAddUserDomainConcepts:(id)a1 maxAnchor:(long long)a2;
- (void)userDomainConceptManager:(id)a0 didDeleteUserDomainConcepts:(id)a1 maxAnchor:(long long)a2;
- (void)unitTesting_overrideDefaultBatchSize:(long long)a0;
- (void)dealloc;

@end
