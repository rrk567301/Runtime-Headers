@class RTLocationShifter;

@interface RTDistanceCalculator : RTService

@property (retain, nonatomic) RTLocationShifter *locationShifter;

- (void).cxx_destruct;
- (double)distanceFromLocation:(id)a0 toLocation:(id)a1 error:(id *)a2;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (BOOL)checkConsistencyBetweenLocation:(id)a0 otherLocation:(id)a1 error:(id *)a2;
- (double)computeCircleIntersectionPercentageOfMinRadiusCircleWithDistance:(double)a0 firstRadius:(double)a1 secondRadius:(double)a2;
- (double)fractionOfUncertaintyAreaOverlapOfTheSmalestUncertaintyAreaBetweenLocation:(id)a0 otherLocation:(id)a1 error:(id *)a2;
- (BOOL)checkFractionAreaOverlapBetweenLocation:(id)a0 otherLocation:(id)a1 largerThanThreshold:(double)a2 error:(id *)a3;
- (double)computeCircleIntersectionAreaWithDistance:(double)a0 firstRadius:(double)a1 secondRadius:(double)a2;

@end
