@interface SODownloadDisplayManager : NSObject {
    double _currentBytesPerSecondValue;
    double _timeRemainingAvergingWindow[7];
}

- (void)dealloc;
- (id)init;
- (void)reset;
- (double)timeRemainingForActiveInstallations:(id)a0 withTagPrefix:(id)a1;
- (void)_appendAveragingTimeInterval:(double)a0;
- (double)_averagedTimeInterval;

@end
