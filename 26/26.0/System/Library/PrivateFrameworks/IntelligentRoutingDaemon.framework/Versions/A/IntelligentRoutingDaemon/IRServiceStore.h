@class NSString;

@interface IRServiceStore : IRStore

@property (readonly, nonatomic) NSString *serviceIdentifier;

+ (void)adjustDBToStaticTokens:(id)a0;
+ (void)adjustFirstSeenDateOfCandidates:(id)a0;
+ (id)fetchAllServicesContainingClientIdentifier:(id)a0 persistenceManager:(id)a1;
+ (id)fetchAllServicesWithPersistenceManager:(id)a0;
+ (id)generateLogForServicesDatabaseWithPersistenceManager:(id)a0;
+ (id)generateLogForStringNumEntitiesInDatabaseWithPersistenceManager:(id)a0;
+ (void)idendifyAndDeleteDuplicateServicesWithWithPersistenceManager:(id)a0;

- (BOOL)addService:(id)a0;
- (void).cxx_destruct;
- (BOOL)addCandidates:(id)a0;
- (BOOL)updateService:(id)a0;
- (BOOL)updateStatistics:(id)a0;
- (BOOL)updateCandidate:(id)a0;
- (id)fetchStatistics;
- (BOOL)_cleanupCandidatesWithDate:(id)a0;
- (BOOL)_cleanupHistoryEventsWithDate:(id)a0;
- (BOOL)_cleanupNotAirplayCandidates;
- (BOOL)_cleanupPredictionEventsInDateInterval:(id)a0;
- (BOOL)_cleanupReplayEventsWithDate:(id)a0;
- (BOOL)_cleanupTrashedHistoryEvents;
- (BOOL)addHistoryEvent:(id)a0 withLimit:(unsigned long long)a1;
- (BOOL)addReplayEvents:(id)a0 withLimit:(unsigned long long)a1;
- (BOOL)cleanupWithDate:(id)a0 dateIntervalOfMiLoPredictionsToDiscard:(id)a1;
- (BOOL)deleteCandidates:(id)a0;
- (BOOL)deleteService;
- (id)fetchCandidatesContainer;
- (id)fetchHistoryEventsContainerWithLimit:(unsigned long long)a0;
- (id)fetchReplayEventAtDate:(id)a0;
- (id)fetchReplayEventsContainer;
- (id)fetchService;
- (id)getReplayEventDescriptors;
- (id)initWithPersistenceManager:(id)a0 serviceIdentifier:(id)a1;
- (BOOL)injectStatisticsRelationship;

@end
