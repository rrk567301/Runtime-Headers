@class NSArray, NSMutableDictionary, PRSCoreDuet;

@interface PRSMLManager : NSObject

@property (retain) PRSCoreDuet *coreDuet;
@property (retain) NSMutableDictionary *mapPredictionEnginesToClasses;
@property (retain) NSMutableDictionary *mapPredictionEnginesToCounts;
@property (retain) NSMutableDictionary *mapPredictionEnginesToCountFiles;
@property (retain) NSMutableDictionary *mapPredictionEnginesToPredictedTopHit;
@property (retain) NSMutableDictionary *dictCoreDuetInfo;
@property (retain) NSArray *categoryList;
@property (retain) NSMutableDictionary *combinedTopScoreOrder;
@property (retain) NSMutableDictionary *combinedBottomScoreOrder;

+ (id)createPathToSpotlightPrefFile;
+ (id)getSPMLSharedInstance;

- (void)saveLastRankingForCategories:(id)a0;
- (void)addCategoryAndGroupNameToTrainCategories:(id)a0 groupName:(id)a1;
- (unsigned long long)getTotalResultsUsedCountForDuet;
- (void)addResultToTrainCategories:(id)a0;
- (void)dumpPredictionStatsToFlatFiles;
- (id)getLastSavedCategoryRankings;
- (id)getRankedCategoriesAsDictionaryForDays:(long long)a0;
- (void).cxx_destruct;
- (id)initManager;
- (unsigned long long)getCountForCategory:(id)a0;

@end
