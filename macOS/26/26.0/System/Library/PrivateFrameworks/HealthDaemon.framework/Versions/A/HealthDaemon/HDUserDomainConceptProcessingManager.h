@class HDProfile, HDAssertion;

@interface HDUserDomainConceptProcessingManager : NSObject <HDContentDatabaseAvailabilityObserver, HDOntologyContentShardImportObserver, HDProfileReadyObserver, HDUserDomainConceptObserver> {
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
- (void)unitTesting_triggerUserDomainConceptProcessing;
- (void)dealloc;
- (void)userDomainConceptManager:(id)a0 didAddUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didJournalUserDomainConcepts:(id)a1;
- (void)unitTesting_overrideDefaultBatchSize:(long long)a0;
- (void)userDomainConceptManager:(id)a0 didDeleteUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didUpdateUserDomainConcepts:(id)a1;
- (id)init;
- (void)contentDatabaseDidBecomeAvailable:(BOOL)a0;
- (void)unitTesting_scheduleUserDomainConceptProcessing;
- (void)unitTesting_overrideDefaultBatchLimit:(long long)a0;
- (void)didImportOntologyShard;
- (void).cxx_destruct;

@end
