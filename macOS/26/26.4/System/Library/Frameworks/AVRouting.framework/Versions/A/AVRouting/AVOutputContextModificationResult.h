@class MXRoutingContextModificationMetrics, NSString;

@interface AVOutputContextModificationResult : AVOutputContextDestinationChange {
    long long mStatus;
    NSString *mCancellationReason;
    BOOL mDidRequireAuthorization;
}

@property (readonly, retain, nonatomic) MXRoutingContextModificationMetrics *modificationMetrics;

- (long long)status;
- (void)dealloc;
- (BOOL)didRequireAuthorization;
- (id)cancellationReason;
- (id)initWithFigRouteConfigUpdatedReason:(struct __CFString { } *)a0 metrics:(id)a1;

@end
