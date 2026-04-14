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

- (id)getRankedCategoriesAsDictionaryForDays:(long long)a0;
- (void)saveLastRankingForCategories:(id)a0;
- (void)dumpPredictionStatsToFlatFiles;
- (void).cxx_destruct;
- (unsigned long long)getCountForCategory:(id)a0;
- (unsigned long long)getTotalResultsUsedCountForDuet;
- (id)getLastSavedCategoryRankings;
- (void)addResultToTrainCategories:(id)a0;
- (id)initManager;
- (void)addCategoryAndGroupNameToTrainCategories:(id)a0 groupName:(id)a1;

@end
