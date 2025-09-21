@class TRIExcessiveStaleFactorsUsageTimer, NSMutableDictionary, TRITrackingId;

@interface TRIClientGuardedData : NSObject {
    TRITrackingId *trackingId;
    NSMutableDictionary *namespaceUpdateHandlerTokens;
    NSMutableDictionary *namespaceCallbacks;
    TRIExcessiveStaleFactorsUsageTimer *excessiveStaleFactorUsageTimer;
    char isLazyInitComplete;
}

- (void).cxx_destruct;

@end
