@class NSDictionary;

@interface WiFiUsageLQMWindowAnalysisNetworkQuality : WiFiUsageLQMWindowAnalysis

@property (nonatomic) unsigned long long networkQualityResponsivenessScore;
@property (retain, nonatomic) NSDictionary *networkQualityEventFields;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 AndDictionary:(id)a1 andContext:(struct context { char x0; char x1; char x2; })a2 andTimestamp:(id)a3 onQueue:(id)a4;

@end
