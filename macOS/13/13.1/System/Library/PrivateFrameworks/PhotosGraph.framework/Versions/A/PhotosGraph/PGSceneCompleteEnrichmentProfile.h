@interface PGSceneCompleteEnrichmentProfile : PGDefaultEnrichmentProfile

+ (unsigned long long)durationForSummary;
+ (long long)cardinalModeForSummary;

- (id)identifier;
- (BOOL)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;
- (unsigned short)targetEnrichmentState;
- (id)curationOptions;

@end
