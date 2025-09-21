@class NSArray;

@interface VNCreateSceneprintRequest : VNImageBasedRequest

@property (nonatomic) BOOL useCenterTileOnly;
@property (nonatomic) BOOL returnAllResults;
@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; struct { int x0; int x1; } x4; } *)revisionAvailability;
+ (BOOL)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;
+ (id)privateRevisionsSet;
+ (BOOL)recordSpecifierModelEquivalenciesInRegistrar:(id)a0 error:(id *)a1;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;

- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)description;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)VNImageProcessingSessionPrintKeyPath;
- (BOOL)hasCancellationHook;
- (id)supportedImageSizeSet;

@end
