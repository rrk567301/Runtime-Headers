@class NSArray, VNImageRegistrationSignature;

@interface VNTrackTranslationalImageRegistrationRequest : VNStatefulRequest {
    unsigned long long _previousRequestRevision;
    VNImageRegistrationSignature *_previousImageRegistrationSignature;
}

@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; struct { int x0; int x1; } x4; } *)revisionAvailability;

- (id)init;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (BOOL)allowsCachingOfResults;
- (id)supportedComputeStageDevicesAndReturnError:(id *)a0;

@end
