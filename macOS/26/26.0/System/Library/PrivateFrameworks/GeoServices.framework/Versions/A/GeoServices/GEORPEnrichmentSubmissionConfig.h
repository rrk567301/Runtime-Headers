@interface GEORPEnrichmentSubmissionConfig : GEOServiceRequestDefaultConfig

+ (id)standardConfig;

- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKindForRequest:(id)a0 traits:(id)a1;
- (unsigned long long)urlType;
- (int)analyticNetworkServiceTypeForRequest:(id)a0 traits:(id)a1;

@end
