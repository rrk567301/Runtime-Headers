@class NSArray, VN6Ac6Cyl5O5oK19HboyMBR;

@interface VN6kBnCOr2mZlSV6yV1dLwB : VNImageBasedRequest

@property (copy, nonatomic) VN6Ac6Cyl5O5oK19HboyMBR *inputSignatureprint;
@property (readonly, nonatomic) unsigned long long imageSignatureprintType;
@property (readonly, nonatomic) unsigned long long imageSignatureHashType;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;
+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatibility;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (char)warmUpSession:(id)a0 error:(id *)a1;

- (id)description;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (long long)dependencyProcessingOrdinality;
- (id)imageSignaturnprintByRunningNeuralHashprintRequest:(id)a0 error:(id *)a1;
- (id)initWithImageSignatureprintType:(unsigned long long)a0 imageSignatureHashType:(unsigned long long)a1;
- (id)initWithImageSignatureprintType:(unsigned long long)a0 imageSignatureHashType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (void)setImageSignatureHashType:(unsigned long long)a0;
- (void)setImageSignatureprintType:(unsigned long long)a0;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
