@class NSArray, NSDateInterval, PLFrequentLocationManager, PLLocalCreationDateCreator;
@protocol PLMomentGenerationDataManagement;

@interface PLPhotosHighlightClusterGenerator : NSObject

@property (readonly, weak, nonatomic) id<PLMomentGenerationDataManagement> dataManager;
@property (readonly, nonatomic) NSArray *allMomentsSorted;
@property (readonly, nonatomic) PLFrequentLocationManager *frequentLocationManager;
@property (readonly, nonatomic) NSDateInterval *recentHighlightsDateInterval;
@property (readonly, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator;

- (void).cxx_destruct;
- (id)_aggregationHighlightClustersForMoments:(id)a0;
- (id)_aggregationsInMoments:(id)a0 unavailableMoments:(id)a1 intersectingMoments:(id)a2;
- (id)_dayMomentClustersWithMomentsSortedByDate:(id)a0;
- (BOOL)_isRecent:(id)a0;
- (id)_recentHighlightClusterWithRecentMoments:(id)a0;
- (id)_recentHighlightClusterWithRecentMoments:(id)a0 intersectingMoments:(id)a1;
- (id)_recentMoments;
- (id)_remainingHighlightClusterWithMoments:(id)a0;
- (id)_remainingHighlightClustersWithClusters:(id)a0 intersectingMoments:(id)a1;
- (id)_remainingMomentClustersWithMomentsSortedByDate:(id)a0;
- (id)_tripHighlightClustersForMoments:(id)a0 tripType:(unsigned long long)a1;
- (id)_tripsInMoments:(id)a0;
- (id)highlightClustersIntersectingMoments:(id)a0 includeAllTripHighlightClusters:(BOOL)a1;
- (id)initWithDataManager:(id)a0 frequentLocationManager:(id)a1 recentHighlightDateInterval:(id)a2 localCreationDateCreator:(id)a3;
- (id)recentMomentsInMomentClusters:(id)a0;

@end
