@class MNDepartureUpdater;

@interface __MNDepartureMinimumArrivalDistanceCondition : NSObject <__MNDepartureCondition> {
    MNDepartureUpdater *_updater;
    double _closestDistanceToWaypoint;
    double _threshold;
}

- (void).cxx_destruct;
- (double)scoreForLocation:(id)a0;
- (id)initWithUpdater:(id)a0 distanceThreshold:(double)a1;

@end
