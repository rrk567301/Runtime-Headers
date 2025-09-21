@class NSArray, NSString;

@interface VNDetectFaceCaptureQualityRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; struct { int x0; int x1; } x4; } *)revisionAvailability;
+ (BOOL)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;
+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatibility;
+ (Class)configurationClass;

- (long long)dependencyProcessingOrdinality;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;

@end
