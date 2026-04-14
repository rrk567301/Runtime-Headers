@class _NSScrollingMomentumCalculator;

@interface _NSScrollingConcurrentMomentumAnimation : _NSScrollingConcurrentVBLPreprocessFilter {
    double _initialTimestamp;
    struct CGPoint { double x; double y; } _lastSetOrigin;
}

@property (retain) _NSScrollingMomentumCalculator *momentumCalculator;

- (void)dealloc;
- (id)initWithMomentumCalculator:(id)a0;
- (void)scrollingVBLMonitor:(id)a0 synchronizeForTimestamp:(double)a1;

@end
