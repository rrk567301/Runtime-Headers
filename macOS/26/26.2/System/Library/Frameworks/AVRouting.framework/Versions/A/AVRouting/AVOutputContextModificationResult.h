@class MXRoutingContextModificationMetrics, NSString;

@interface AVOutputContextModificationResult : AVOutputContextDestinationChange {
    long long mStatus;
    NSString *mCancellationReason;
}

@property (readonly, retain, nonatomic) MXRoutingContextModificationMetrics *modificationMetrics;

- (long long)status;
- (void)dealloc;
- (id)cancellationReason;
- (id)initWithFigRouteConfigUpdatedReason:(struct __CFString { } *)a0 metrics:(id)a1;

@end
