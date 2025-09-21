@class NSArray;

@interface VNHomographicImageRegistrationRequest : VNImageRegistrationRequest

@property (readonly, copy) NSArray *results;

- (char)allowsCachingOfResults;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (char)wantsSequencedRequestObservationsRecording;
- (char)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
