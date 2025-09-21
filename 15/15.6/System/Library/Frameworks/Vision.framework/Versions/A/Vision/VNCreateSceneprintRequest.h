@class NSArray;

@interface VNCreateSceneprintRequest : VNImageBasedRequest

@property (nonatomic) char useCenterTileOnly;
@property (nonatomic) char returnAllResults;
@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)privateRevisionsSet;
+ (char)recordSpecifierModelEquivalenciesInRegistrar:(id)a0 error:(id *)a1;
+ (char)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;

- (id)description;
- (id)VNImageProcessingSessionPrintKeyPath;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (char)hasCancellationHook;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)supportedImageSizeSet;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
