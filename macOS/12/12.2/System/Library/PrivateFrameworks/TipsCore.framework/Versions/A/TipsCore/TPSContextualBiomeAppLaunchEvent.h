@interface TPSContextualBiomeAppLaunchEvent : TPSContextualBiomeEvent

+ (id)observationDateFromEvent:(id)a0;

- (id)_filteringPredicate;
- (id)publisherFromStartTime:(double)a0;
- (id /* block */)filterHandler;

@end
