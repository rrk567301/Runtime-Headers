@class PLFrequentLocationManager, NSCalendar, PLLocalCreationDateCreator;
@protocol PLLibraryClustererDelegate;

@interface PLLibraryClusterer : NSObject

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator;
@property (readonly, nonatomic) PLFrequentLocationManager *frequentLocationManager;
@property (weak, nonatomic) id<PLLibraryClustererDelegate> delegate;

+ (void)initialize;
+ (char)_momentEligibleForSplit:(id)a0;
+ (char)highlightSplitBasedOnLocationTypeEnabled;
+ (char)highlightSplitBasedOnOriginatorsEnabled;
+ (char)highlightSplitBasedOnTimeAndLocationEnabled;

- (void).cxx_destruct;
- (void)_createMomentsForDailyAssets:(id)a0 currentMomentExistingMomentData:(id)a1;
- (id)_eligibleClusterForMoment:(id)a0 inMomentsByLocationType:(id)a1;
- (void)_mergeMomentsIntoClustersBasedOnTimeWithMoments:(id)a0 clusters:(id)a1;
- (id)_momentsGroupedByDayWithMomentsSortedByDate:(id)a0;
- (id)_momentsSplitBetweenOriginatorsWithMoments:(id)a0;
- (id)_momentsSplitOnLocationTypeWithMoments:(id)a0;
- (id)_momentsSplitWithinDayWithMoments:(id)a0;
- (char)_shouldSplitMomentsWithTimeDistance:(double)a0 locationDistance:(double)a1;
- (id)_startDateComponentsForMomentCluster:(id)a0;
- (id)initWithLocalCreationDateCreator:(id)a0 frequentLocationManager:(id)a1;
- (id)locationBasedMomentClustersForMomentsSortedByDate:(id)a0;
- (id)momentClustersForMomentsSortedByDate:(id)a0 allowLocationSplits:(char)a1 allowExternalSplits:(char)a2;
- (void)processMomentsWithAssets:(id)a0;

@end
