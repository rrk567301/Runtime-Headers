@interface PGCompleteEnrichmentProfile : PGDefaultEnrichmentProfile

+ (unsigned long long)durationForSummary;
+ (long long)cardinalModeForSummary;

- (id)identifier;
- (unsigned short)targetEnrichmentState;
- (id)curationOptions;
- (BOOL)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;

@end
