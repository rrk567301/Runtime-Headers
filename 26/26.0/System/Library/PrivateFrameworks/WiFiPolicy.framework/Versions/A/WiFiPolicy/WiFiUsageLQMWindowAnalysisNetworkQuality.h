@class NSDictionary;

@interface WiFiUsageLQMWindowAnalysisNetworkQuality : WiFiUsageLQMWindowAnalysis

@property (nonatomic) unsigned long long networkQualityResponsivenessScore;
@property (retain, nonatomic) NSDictionary *networkQualityEventFields;

- (id)initWithRollingWindow:(id)a0 AndDictionary:(id)a1 andContext:(struct context { BOOL x0; BOOL x1; BOOL x2; })a2 andTimestamp:(id)a3 onQueue:(id)a4;
- (id)addDimensionsTo:(id)a0;
- (void).cxx_destruct;

@end
