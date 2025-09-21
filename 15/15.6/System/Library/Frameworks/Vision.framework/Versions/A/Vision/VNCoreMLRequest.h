@class VNCoreMLModel;

@interface VNCoreMLRequest : VNImageBasedRequest

@property (readonly, nonatomic) VNCoreMLModel *model;
@property (nonatomic) unsigned long long imageCropAndScaleOption;

+ (Class)configurationClass;
+ (char)supportedRevisionsAreFilteredBasedOnAvailableComputeDevices;

- (id)description;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (char)allowsCachingOfResults;
- (void)applyConfigurationOfRequest:(id)a0;
- (id)initWithModel:(id)a0 completionHandler:(id /* block */)a1;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDuplicateInstance;
- (id)sequencedRequestPreviousObservationsKey;
- (id)supportedComputeStageDevicesAndReturnError:(id *)a0;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
