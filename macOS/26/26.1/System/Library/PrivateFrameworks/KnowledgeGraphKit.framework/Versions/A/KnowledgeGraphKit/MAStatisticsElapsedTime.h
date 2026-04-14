@interface MAStatisticsElapsedTime : NSObject {
    double _elapsedTime;
    double _elapsedStart;
    long long _elapsedCounter;
    double _lastBeginTransactionTime;
    double _lastEndTransactionTime;
}

- (double)elapsedTime;
- (void)end;
- (void)begin;
- (void)dealloc;
- (id)init;
- (double)elapsedTimeSinceLastBeginTransaction;
- (double)elapsedTimeSinceLastEndTransaction;
- (BOOL)isTransactionPending;

@end
