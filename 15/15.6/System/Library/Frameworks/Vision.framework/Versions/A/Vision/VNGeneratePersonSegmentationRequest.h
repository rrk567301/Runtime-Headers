@class NSArray;

@interface VNGeneratePersonSegmentationRequest : VNStatefulRequest {
    NSArray *_previousObservations;
    unsigned long long _previousImageWidth;
    unsigned long long _previousImageHeight;
}

@property (nonatomic) char useTiling;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) unsigned long long qualityLevel;
@property (nonatomic) unsigned int outputPixelFormat;
@property (readonly, copy) NSArray *results;

+ (id)new;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)privateRevisionsSet;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (long long)dependencyProcessingOrdinality;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)supportedOutputPixelFormatsAndReturnError:(id *)a0;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
