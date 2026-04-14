@interface MAStatisticsElapsedTime : NSObject {
    double _elapsedTime;
    double _elapsedStart;
    long long _elapsedCounter;
    double _lastBeginTransactionTime;
    double _lastEndTransactionTime;
}

- (void)dealloc;
- (id)init;
- (void)begin;
- (void)end;
- (double)elapsedTime;
- (double)elapsedTimeSinceLastBeginTransaction;
- (double)elapsedTimeSinceLastEndTransaction;
- (BOOL)isTransactionPending;

@end
