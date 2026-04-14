@class HDSQLitePredicate, HDActivitySummaryQueryHelper;

@interface HDActivitySummaryQueryServer : HDQueryServer {
    BOOL _deliversUpdates;
    long long _lastProcessedAnchor;
    HDSQLitePredicate *_filterPredicate;
    HDActivitySummaryQueryHelper *_queryHelper;
    BOOL _hasSentInitialResults;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (void)_queue_stop;
- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;

@end
