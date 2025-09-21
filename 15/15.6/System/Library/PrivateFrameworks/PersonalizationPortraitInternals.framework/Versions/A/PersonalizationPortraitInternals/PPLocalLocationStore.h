@class NSCache, PPLocationStorage, PPTrialWrapper, _PASLock;

@interface PPLocalLocationStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {
    _PASLock *_cache;
    NSCache *_modelCache;
    PPTrialWrapper *_trialWrapper;
}

@property (readonly, nonatomic) PPLocationStorage *storage;
@property (readonly, nonatomic) char useScoreInterpreter;

+ (id)defaultStore;
+ (char)isLocationRelevantNamedEntityCategory:(unsigned long long)a0;
+ (id)locationFromMapItem:(id)a0;
+ (id)locationFromMapItemDictionary:(id)a0;
+ (id)locationNamedEntityToPPScoredLocation:(id)a0;
+ (unsigned short)namedEntityCategoryToLocationCategory:(unsigned long long)a0;
+ (unsigned short)routineLOITypeToLocationCategory:(long long)a0;
+ (id)scoredLocationFromName:(id)a0 category:(unsigned short)a1 score:(double)a2 sentimentScore:(double)a3;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)locationRecordsWithQuery:(id)a0 error:(id *)a1;
- (char)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (char)iterLocationRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)iterRankedLocationsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)processFeedback:(id)a0;
- (id)locationForWork;
- (id)locationForHome;
- (char)deleteAllLocationFeedbackCountsOlderThanDate:(id)a0;
- (char)deleteAllLocationsFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (char)deleteAllLocationsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThan:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllLocationsOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (char)donateLocations:(id)a0 source:(id)a1 contextualNamedEntities:(id)a2 algorithm:(unsigned short)a3 cloudSync:(char)a4 error:(id *)a5;
- (double)finalScoreFromRecordsUsingHybrid:(id)a0 streamingScorer:(id)a1 mlModel:(id)a2;
- (id)homeOrWorkAddresses;
- (id)initWithStorage:(id)a0 trialWrapper:(id)a1;
- (id)locationRecordOfCategory:(unsigned short)a0;
- (char)pruneOrphanedLocationFeedbackCountsWithLimit:(long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(char *)a3;
- (id)rankedLocationsWithQuery:(id)a0 clientProcessName:(id)a1 error:(id *)a2;

@end
