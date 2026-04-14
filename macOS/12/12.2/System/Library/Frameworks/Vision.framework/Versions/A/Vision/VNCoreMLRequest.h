@class VNCoreMLModel;

@interface VNCoreMLRequest : VNImageBasedRequest

@property (readonly, nonatomic) VNCoreMLModel *model;
@property (nonatomic) unsigned long long imageCropAndScaleOption;

+ (Class)configurationClass;

- (id)description;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)allowsCachingOfResults;
- (id)newDefaultRequestInstance;
- (void)applyConfigurationOfRequest:(id)a0;
- (id)initWithModel:(id)a0 completionHandler:(id /* block */)a1;

@end
