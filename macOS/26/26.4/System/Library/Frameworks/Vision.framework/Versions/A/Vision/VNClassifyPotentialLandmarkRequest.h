@interface VNClassifyPotentialLandmarkRequest : VNImageBasedRequest

@property unsigned long long imageCropAndScaleOption;

+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (Class)configurationClass;
+ (BOOL)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;
+ (id)knownClassificationsForRevision:(unsigned long long)a0 error:(id *)a1;

- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)supportedIdentifiersAndReturnError:(id *)a0;

@end
