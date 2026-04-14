@class NSArray;

@interface VNGenerateImageSegmentationRequest : VNImageBasedRequest {
    NSArray *_targetPoints;
}

@property (nonatomic) unsigned int outputPixelFormat;
@property (readonly, copy) NSArray *results;
@property (nonatomic) BOOL disableConnectedComponentRefinement;
@property (nonatomic) BOOL fillGapsInMask;
@property (readonly, nonatomic) long long maximumTargetPoints;
@property (retain, nonatomic) NSArray *targetPoints;
@property (nonatomic) unsigned long long minimumMaskPixelCount;

+ (Class)configurationClass;
+ (void)downloadModelForTests:(id /* block */)a0;

- (void)applyConfigurationOfRequest:(id)a0;
- (id)init;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)supportedFeaturesAndReturnError:(id *)a0;
- (id)supportedOutputPixelFormatsAndReturnError:(id *)a0;

@end
