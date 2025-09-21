@class NSNumber, NSArray;

@interface VNDetectContoursRequest : VNImageBasedRequest

@property (nonatomic) char forceUseInputCVPixelBufferDirectly;
@property (nonatomic) char inHierarchy;
@property (nonatomic) float contrastAdjustment;
@property (retain, nonatomic) NSNumber *contrastPivot;
@property (nonatomic) char detectsDarkOnLight;
@property (nonatomic) char detectDarkOnLight;
@property (nonatomic) unsigned long long maximumImageDimension;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
