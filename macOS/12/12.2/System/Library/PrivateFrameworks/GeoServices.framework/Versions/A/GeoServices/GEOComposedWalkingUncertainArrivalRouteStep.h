@class NSArray;

@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep {
    NSArray *_aggregatedGEOSteps;
    double _aggregatedStepsDistance;
    unsigned int _aggregatedStepsDuration;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned int)duration;
- (double)distance;
- (BOOL)isUncertainArrival;
- (unsigned int)_calculateAggregatedStepsDuration;
- (double)_calculateAggregatedStepsDistance;
- (id)initWithComposedRoute:(id)a0 aggregatedGEOSteps:(id)a1 stepIndex:(unsigned long long)a2 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 maneuverPointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;

@end
