@class VNImageBuffer, VNImageRegistrationSignature;

@interface VNImageRegistrationRequest : VNTargetedImageRequest {
    VNImageBuffer *_cachedFloatingImageBuffer;
    VNImageRegistrationSignature *_cachedFloatingImageSignature;
}

+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id)cachedFloatingImageBufferReturningError:(id *)a0;
- (BOOL)getReferenceImageBuffer:(id *)a0 registrationSignature:(id *)a1 forRequestPerformingContext:(id)a2 error:(id *)a3;
- (id)cachedFloatingImageRegistrationSignatureReturningError:(id *)a0;
- (BOOL)allowsCachingOfResults;
- (BOOL)wantsSequencedRequestObservationsRecording;

@end
