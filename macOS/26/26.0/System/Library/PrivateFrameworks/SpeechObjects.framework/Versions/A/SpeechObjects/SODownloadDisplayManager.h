@interface SODownloadDisplayManager : NSObject {
    double _currentBytesPerSecondValue;
    double _timeRemainingAvergingWindow[7];
}

- (void)reset;
- (void)dealloc;
- (id)init;
- (void)_appendAveragingTimeInterval:(double)a0;
- (double)_averagedTimeInterval;
- (double)timeRemainingForActiveInstallations:(id)a0 withTagPrefix:(id)a1;

@end
