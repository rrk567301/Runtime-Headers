@class NSString, NSArray, NSDictionary, NSDate, NSSet;

@interface _CDInteractionsStatisticsConfig : NSObject {
    NSDate *_anchorDate;
    double _anchorTimeStamp;
    double _maxComputationTime;
    BOOL _isWeekEndShare;
    NSDate *_leftBoundDate;
    NSDate *_rightBoundDate;
    unsigned long long _fetchLimit;
    NSArray *_featureNamesToSortWith;
    BOOL _shouldSortAscending;
    BOOL _shouldUseSuggestionEngaged;
    NSDictionary *_statsDefaultValues;
    NSArray *_statsToCompute;
    NSSet *_peopleInPhotoIdentifiers;
}

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *topDomainURL;
@property (nonatomic) int fetchBatchSize;
@property (nonatomic) BOOL isFallbackFetch;

- (id)init;
- (void).cxx_destruct;
- (id)predicate;
- (void)setFetchLimit:(unsigned long long)a0;
- (void)computeStatsForInteractionRecord:(id)a0 inInteractionsStatistics:(id)a1 chunkIndex:(int)a2;
- (id)defaultValues;
- (id)featureNamesToSortWith;
- (unsigned long long)fetchLimit;
- (id)getConversationIdAndComputeStatForStatName:(id)a0 record:(id)a1 inInteractionsStatistics:(id)a2;
- (id)initWithAnchorDate:(id)a0 leftBoundDate:(id)a1 rightBoundDate:(id)a2 fetchLimit:(unsigned long long)a3 maxComputationTime:(double)a4 featureNamesToSortWith:(id)a5 shouldSortAscending:(BOOL)a6 shouldUseSuggestionEngaged:(BOOL)a7 statsDefaultValues:(id)a8;
- (id)interactionsSelectionPredicateBetweenStartDate:(id)a0 andEndDate:(id)a1;
- (id)rightBoundDate;
- (void)setFeatureNamesToSortWith:(id)a0;
- (void)setPeopleInPhotoIdentifiers:(id)a0;
- (void)setShouldSortAscending:(BOOL)a0;
- (void)setStatsToCompute:(id)a0;
- (BOOL)shouldStopRecordProcessing:(id)a0;
- (BOOL)shouldUseSuggestionEngaged;

@end
