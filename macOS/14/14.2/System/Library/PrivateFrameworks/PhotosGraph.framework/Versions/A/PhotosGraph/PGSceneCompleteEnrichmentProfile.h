@interface PGSceneCompleteEnrichmentProfile : PGDefaultEnrichmentProfile

+ (unsigned long long)durationForSummary;

- (id)identifier;
- (id)curationOptions;
- (BOOL)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;
- (unsigned short)targetEnrichmentState;

@end
