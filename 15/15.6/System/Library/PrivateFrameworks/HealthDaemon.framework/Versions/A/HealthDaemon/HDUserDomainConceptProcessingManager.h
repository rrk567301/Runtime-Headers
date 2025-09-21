@class NSString, HDProfile, HDAssertion;

@interface HDUserDomainConceptProcessingManager : NSObject <HDOntologyDatabaseAvailabilityObserver, HDOntologyShardImporterObserver, HDProfileReadyObserver, HDUserDomainConceptObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _batchSize;
    long long _batchLimit;
    char _hasScheduledProcessing;
    double _scheduledProcessingTimestamp;
    HDAssertion *_databaseAssertion;
    _Atomic BOOL _isDisabledForHealthDaemonLifetime;
}

@property (nonatomic) char ignoresAutomaticProcessingTriggers;
@property (copy, nonatomic) id /* block */ unitTesting_userDomainConceptProcessingManagerDidFinishProcessing;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)ontologyDatabase:(id)a0 didBecomeAvailable:(char)a1;
- (void)ontologyShardImporter:(id)a0 didImportEntry:(id)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)unitTesting_overrideDefaultBatchLimit:(long long)a0;
- (void)unitTesting_overrideDefaultBatchSize:(long long)a0;
- (void)unitTesting_scheduleUserDomainConceptProcessing;
- (void)unitTesting_triggerUserDomainConceptProcessing;
- (void)userDomainConceptManager:(id)a0 didAddUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didDeleteUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didJournalUserDomainConcepts:(id)a1;
- (void)userDomainConceptManager:(id)a0 didUpdateUserDomainConcepts:(id)a1;

@end
