@class NSString, WFMeasureResult;

@interface WiFiUsageLQMWindowAnalysisLinkTest : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) WFMeasureResult *linkTestResults;
@property (retain, nonatomic) NSString *linkTestReason;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 andReason:(id)a1 withWFMeasureResults:(id)a2 andActiveCall:(BOOL)a3 onQueue:(id)a4;

@end
