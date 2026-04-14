@interface HomeKitMetrics.MappedDisplayReasonRadarRequestFilter : NSObject <HMMRadarRequestFilter> {
    void /* unknown type, empty encoding */ filtersByDisplayReason;
    void /* unknown type, empty encoding */ defaultRequestFilter;
}

- (void).cxx_destruct;
- (id)init;
- (void)radarRequestedForDisplayReason:(id)a0;
- (BOOL)shouldRequestRadarForDisplayReason:(id)a0;

@end
