@class VNCoreMLModel;

@interface VNCoreMLRequest : VNImageBasedRequest

@property (readonly, nonatomic) VNCoreMLModel *model;
@property (nonatomic) unsigned long long imageCropAndScaleOption;

+ (Class)configurationClass;
+ (BOOL)supportedRevisionsAreFilteredBasedOnAvailableComputeDevices;

- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)description;
- (id)initWithModel:(id)a0;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowsCachingOfResults;
- (id)initWithModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)newDuplicateInstance;
- (id)supportedComputeStageDevicesAndReturnError:(id *)a0;

@end
