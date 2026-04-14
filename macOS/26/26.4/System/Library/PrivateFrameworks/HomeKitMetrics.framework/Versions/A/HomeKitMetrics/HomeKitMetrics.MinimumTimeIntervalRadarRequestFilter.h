@interface HomeKitMetrics.MinimumTimeIntervalRadarRequestFilter : NSObject <HMMRadarRequestFilter> {
    void /* unknown type, empty encoding */ minimumRequestInterval;
    void /* unknown type, empty encoding */ filterStorage;
    void /* unknown type, empty encoding */ dateFactory;
}

- (void).cxx_destruct;
- (id)init;
- (void)radarRequestedForDisplayReason:(id)a0;
- (BOOL)shouldRequestRadarForDisplayReason:(id)a0;

@end
