@class NSArray, VNImageBuffer, VNOpticalFlowObservation, VNImageSignature;

@interface VNTrackOpticalFlowRequest : VNStatefulRequest {
    unsigned long long _previousRequestRevision;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousRegionOfInterest;
    VNImageBuffer *_previousImageBuffer;
    VNImageSignature *_previousImageSignature;
    VNOpticalFlowObservation *_previousObservation;
    char _previousPortraitMode;
}

@property (nonatomic) unsigned long long computationAccuracy;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) char keepNetworkOutput;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (id)_createGeneratorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1 images:(id)a2 portraitMode:(char)a3 previousTargetImageIsCurrentRefImage:(char)a4 previousObservation:(id)a5;
- (id)_observationForOpticalFlowOfReferenceImageBuffer:(id)a0 targetImageBuffer:(id)a1 portraitMode:(char)a2 previousObservation:(id)a3 previousTargetImageIsCurrentRefImage:(char)a4 requestRevision:(unsigned long long)a5 requestPerformingContext:(id)a6 error:(id *)a7;
- (char)allowsCachingOfResults;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)supportedOutputPixelFormatsAndReturnError:(id *)a0;
- (char)warmUpSession:(id)a0 error:(id *)a1;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
