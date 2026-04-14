@class NSArray, NSString;

@interface VNDetectFacePoseRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)privateRevisionsSet;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestMappingTable;
+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatibility;

- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (long long)dependencyProcessingOrdinality;

@end
