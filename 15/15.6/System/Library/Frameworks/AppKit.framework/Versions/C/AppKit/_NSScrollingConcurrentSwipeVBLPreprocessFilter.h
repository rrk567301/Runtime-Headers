@interface _NSScrollingConcurrentSwipeVBLPreprocessFilter : _NSScrollingConcurrentEventVBLPreprocessFilter {
    double _cumulativeDelta;
    double _originalOrigin;
    char _isOriginalOriginDetermined;
}

@property (nonatomic) long long gestureAxis;

- (void)scrollingVBLMonitor:(id)a0 synchronizeForTimestamp:(double)a1;

@end
