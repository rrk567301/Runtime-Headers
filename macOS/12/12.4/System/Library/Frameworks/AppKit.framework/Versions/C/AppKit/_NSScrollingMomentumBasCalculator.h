@interface _NSScrollingMomentumBasCalculator : _NSScrollingMomentumCalculator {
    double _decelerationFactorX;
    double _decelerationFactorY;
    double _decelerationLnFactorX;
    double _decelerationLnFactorY;
    double _durationUntilStop;
    double _minXOffset;
    double _maxXOffset;
    double _minYOffset;
    double _maxYOffset;
    long long _lastRequestedDuration;
    struct CGPoint { double x; double y; } _offsetAtLastRequestedDuration;
    double _velocityAtLastRequestedDuration;
}

- (id)init;
- (double)durationUntilStop;
- (struct CGPoint { double x0; double x1; })positionAfterDuration:(double)a0;
- (double)velocityAfterDuration:(double)a0;
- (void)calculateDestination;
- (double)decelerationRate;
- (void)calculateToReachDestination;
- (double)horizontalScrollDecelerationFactor;
- (void)setHorizontalScrollDecelerationFactor:(double)a0;
- (double)verticalScrollDecelerationFactor;
- (void)setVerticalScrollDecelerationFactor:(double)a0;

@end
