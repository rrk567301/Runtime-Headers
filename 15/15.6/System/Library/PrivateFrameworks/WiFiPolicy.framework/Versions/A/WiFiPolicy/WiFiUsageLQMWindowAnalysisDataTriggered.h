@class NSString, NSArray;

@interface WiFiUsageLQMWindowAnalysisDataTriggered : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *dataTriggerReason;
@property (readonly, nonatomic) NSArray *triggerCriteriaList;

- (void).cxx_destruct;
- (void)performAnalysis;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 andSubReason:(id)a1 andContext:(struct context { char x0; char x1; char x2; })a2 andTimestamp:(id)a3 onQueue:(id)a4;

@end
