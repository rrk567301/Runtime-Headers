@class MXRoutingContextModificationMetrics, NSString;

@interface AVOutputContextModificationResult : AVOutputContextDestinationChange {
    long long mStatus;
    NSString *mCancellationReason;
}

@property (readonly, retain, nonatomic) MXRoutingContextModificationMetrics *modificationMetrics;

- (void)dealloc;
- (long long)status;
- (id)cancellationReason;
- (id)initWithFigRouteConfigUpdatedReason:(struct __CFString { } *)a0 metrics:(id)a1;

@end
