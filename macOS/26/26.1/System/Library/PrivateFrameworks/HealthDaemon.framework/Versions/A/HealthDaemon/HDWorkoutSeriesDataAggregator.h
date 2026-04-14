@interface HDWorkoutSeriesDataAggregator : HDSeriesQuantityDataAggregator

+ (BOOL)_shouldAggregateToSeriesIsAppleWatch:(BOOL)a0 hasActiveWorkout:(BOOL)a1 hasForegroundAnchoredObjectQuery:(BOOL)a2 workoutIsFirstParty:(BOOL)a3;

- (BOOL)shouldAggregateToSeriesForState:(id)a0 collector:(id)a1 device:(id)a2 requestedAggregationDate:(id)a3 mode:(long long)a4 options:(unsigned long long)a5;
- (BOOL)_hasForegroundAnchoredObjectQuery:(id)a0;
- (id)_isWorkoutFirstParty:(id)a0;
- (void)setConfiguration:(id)a0;

@end
