@class NSArray, NSString;

@interface VNCreateTorsoprintRequest : VNImageBasedRequest <VNFaceObservationAccepting, VNDetectedObjectObservationAccepting>

@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *inputDetectedObjectObservations;

+ (Class)configurationClass;
+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)supportedPrivateRevisions;
+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatibility;

- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (long long)dependencyProcessingOrdinality;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (BOOL)_processFaceBasedInputInContext:(id)a0 revision:(unsigned long long)a1 torsosThatNeedNoProcessing:(id)a2 torsosThatNeedTorsoprints:(id)a3 error:(id *)a4;
- (BOOL)_processHumanBodyBasedInputInContext:(id)a0 revision:(unsigned long long)a1 torsosThatNeedNoProcessing:(id)a2 torsosThatNeedTorsoprints:(id)a3 error:(id *)a4;
- (id)_processHumanBodyObservations:(id)a0 revision:(unsigned long long)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 context:(id)a3 error:(id *)a4;
- (id)detectHumanBodiesInContext:(id)a0 error:(id *)a1;

@end
