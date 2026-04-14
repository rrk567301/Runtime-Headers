@class NSArray, NSString;

@interface VNGenerateImageFeaturePrintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (readonly, copy) NSArray *results;
@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;

- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)_applicableDetectorAndOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id /* block */)resultsSortingComparator;
- (void)applyConfigurationOfRequest:(id)a0;

@end
