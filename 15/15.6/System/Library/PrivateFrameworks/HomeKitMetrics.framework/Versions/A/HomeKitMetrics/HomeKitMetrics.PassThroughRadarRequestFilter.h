@interface HomeKitMetrics.PassThroughRadarRequestFilter : NSObject <HMMRadarRequestFilter>

- (id)init;
- (void)radarRequestedForDisplayReason:(id)a0;
- (char)shouldRequestRadarForDisplayReason:(id)a0;

@end
