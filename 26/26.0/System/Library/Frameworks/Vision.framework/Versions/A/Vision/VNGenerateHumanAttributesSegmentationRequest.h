@interface VNGenerateHumanAttributesSegmentationRequest : VNGenerateSegmentationRequest

@property (nonatomic) long long qualityLevel;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; struct { int x0; int x1; } x4; } *)revisionAvailability;
+ (id)privateRevisionsSet;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)_supportedHumanAttributesNamesRevision1;

- (long long)dependencyProcessingOrdinality;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)description;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)configuredCopyOfSelfWithBalancedQualityLevel;
- (id)supportedHumanAttributesNamesAndReturnError:(id *)a0;

@end
