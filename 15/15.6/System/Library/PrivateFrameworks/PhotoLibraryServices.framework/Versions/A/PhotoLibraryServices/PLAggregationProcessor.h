@class NSMutableDictionary, NSCalendar, NSDate;

@interface PLAggregationProcessor : NSObject

@property (class, readonly, nonatomic) char isEnabled;
@property (class, readonly, nonatomic) unsigned long long maximumNumberOfAssetsPerMoment;
@property (class, readonly, nonatomic) unsigned long long maximumNumberOfAssetsPerShortMoment;
@property (class, readonly, nonatomic) unsigned long long maximumNumberOfDaysPerAggregation;
@property (class, readonly, nonatomic) unsigned long long maximumNumberOfAssetsPerAggregation;
@property (class, readonly, nonatomic) NSDate *allowedStartDateToAggregate;
@property (class, readonly, nonatomic) double timeIntervalOfRecentContentToIgnore;

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSMutableDictionary *curatedAssetCountByMomentUUID;

+ (void)initialize;
+ (void)setEnabled:(char)a0;
+ (char)requireContiguousAggregation;
+ (char)requireStartAtFirstDayOfWeek;
+ (void)restoreDefaultEnablement;
+ (char)shouldAggregateMoment:(id)a0 numberOfAssetsEligibleForCuration:(out unsigned long long *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_aggregationMomentClustersForMomentClusters:(id)a0;
- (id)processAggregationsWithSortedMomentClusters:(id)a0 momentsContainedInOtherHighlights:(id)a1 progressBlock:(id /* block */)a2;
- (id)sortedNeighborMomentClustersOfMomentClusters:(id)a0 forAllMomentClusters:(id)a1;

@end
