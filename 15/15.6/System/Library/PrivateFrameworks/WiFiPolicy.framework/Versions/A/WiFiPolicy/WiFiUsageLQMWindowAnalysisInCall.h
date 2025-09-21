@class NSString;

@interface WiFiUsageLQMWindowAnalysisInCall : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *status;
@property (nonatomic) double duration;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 andCallStatus:(id)a1 andCallDuration:(double)a2 andContext:(struct context { char x0; char x1; char x2; })a3 andTimestamp:(id)a4 onQueue:(id)a5;

@end
