@interface VN5kJNH3eYuyaLxNpZr5Z7zi : VNImageBasedRequest

@property unsigned long long imageCropAndScaleOption;

+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)a0;
+ (id)knownClassificationsForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)privateRevisionsSet;
+ (char)revision:(unsigned long long)a0 mayAcceptResultsProducedByRevision:(unsigned long long)a1;

- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)supportedIdentifiersAndReturnError:(id *)a0;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
