@class NSString;

@interface IRServiceStore : IRStore

@property (readonly, nonatomic) NSString *serviceIdentifier;

+ (void)adjustDBToStaticTokens:(id)a0;
+ (void)adjustFirstSeenDateOfCandidates:(id)a0;
+ (id)fetchAllServicesForClientIdentifier:(id)a0 persistenceManager:(id)a1;
+ (id)fetchAllServicesWithPersistenceManager:(id)a0;
+ (id)generateLogForServicesDatabaseWithPersistenceManager:(id)a0;
+ (id)generateLogForStringNumEntitiesInDatabaseWithPersistenceManager:(id)a0;
+ (void)idendifyAndDeleteDuplicateServicesWithWithPersistenceManager:(id)a0;

- (void).cxx_destruct;
- (char)addService:(id)a0;
- (char)addCandidates:(id)a0;
- (char)updateService:(id)a0;
- (char)updateStatistics:(id)a0;
- (char)updateCandidate:(id)a0;
- (id)fetchStatistics;
- (char)_cleanupCandidatesWithDate:(id)a0;
- (char)_cleanupHistoryEventsWithDate:(id)a0;
- (char)_cleanupNotAirplayCandidates;
- (char)_cleanupPredictionEventsInDateInterval:(id)a0;
- (char)_cleanupReplayEventsWithDate:(id)a0;
- (char)_cleanupTrashedHistoryEvents;
- (char)addHistoryEvent:(id)a0 withLimit:(unsigned long long)a1;
- (char)addReplayEvents:(id)a0 withLimit:(unsigned long long)a1;
- (char)cleanupWithDate:(id)a0 dateIntervalOfMiLoPredictionsToDiscard:(id)a1;
- (char)deleteCandidates:(id)a0;
- (char)deleteService;
- (id)fetchCandidatesContainer;
- (id)fetchHistoryEventsContainerWithLimit:(unsigned long long)a0;
- (id)fetchMiLoServiceUuid;
- (id)fetchReplayEventAtDate:(id)a0;
- (id)fetchReplayEventsContainer;
- (id)fetchService;
- (id)getReplayEventDescriptors;
- (id)initWithPersistenceManager:(id)a0 serviceIdentifier:(id)a1;
- (char)injectStatisticsRelationship;
- (char)updateMiloServiceWithMiloUuidString:(id)a0;

@end
