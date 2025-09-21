@class NSString;

@interface WiFiUsageLQMWindowAnalysisJoin : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *joinReason;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 andReasonString:(id)a1 andContext:(struct context { char x0; char x1; char x2; })a2 andTimestamp:(id)a3 onQueue:(id)a4;

@end
