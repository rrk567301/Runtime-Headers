@class HDWorkoutManager;

@interface HDCyclingDistanceDataAggregator : HDActiveQuantityDataAggregator {
    HDWorkoutManager *_workoutManager;
}

- (id)initWithDataCollectionManager:(id)a0;
- (id)additionalMetadataForCollector:(id)a0;
- (void).cxx_destruct;

@end
