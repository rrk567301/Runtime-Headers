@class NSString;

@interface WiFiUsageLQMWindowAnalysisInCall : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *status;
@property (nonatomic) double duration;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 andCallStatus:(id)a1 andCallDuration:(double)a2 andActiveCall:(BOOL)a3 onQueue:(id)a4;

@end
