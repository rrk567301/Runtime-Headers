@class NSString, NSArray;

@interface WiFiUsageLQMWindowAnalysisDataTriggered : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *dataTriggerReason;
@property (readonly, nonatomic) NSArray *triggerCriteriaList;

- (void).cxx_destruct;
- (void)performAnalysis;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 andSubReason:(id)a1 andActiveCall:(BOOL)a2 onQueue:(id)a3;

@end
