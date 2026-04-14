@class NSArray, NSString;

@interface VNDetectFacePoseRequest : VNImageBasedRequest <VNFaceObservationAccepting>

@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)privateRevisionsSet;
+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatibility;
+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestMappingTable;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;

- (long long)dependencyProcessingOrdinality;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;

@end
