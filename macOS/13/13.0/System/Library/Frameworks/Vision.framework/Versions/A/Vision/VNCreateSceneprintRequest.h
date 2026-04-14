@class NSArray;

@interface VNCreateSceneprintRequest : VNImageBasedRequest

@property (nonatomic) BOOL useCenterTileOnly;
@property (nonatomic) BOOL returnAllResults;
@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)supportedPrivateRevisions;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;

- (id)description;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)hasCancellationHook;
- (void)applyConfigurationOfRequest:(id)a0;
- (id)supportedImageSizeSet;

@end
