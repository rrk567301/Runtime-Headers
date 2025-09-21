@class VNImageBuffer, VNImageRegistrationSignature;

@interface VNImageRegistrationRequest : VNTargetedImageRequest {
    VNImageBuffer *_cachedFloatingImageBuffer;
    VNImageRegistrationSignature *_cachedFloatingImageSignature;
}

- (void).cxx_destruct;
- (char)allowsCachingOfResults;
- (id)cachedFloatingImageBufferReturningError:(id *)a0;
- (id)cachedFloatingImageRegistrationSignatureReturningError:(id *)a0;
- (char)getReferenceImageBuffer:(id *)a0 registrationSignature:(id *)a1 forRequestPerformingContext:(id)a2 error:(id *)a3;
- (char)wantsSequencedRequestObservationsRecording;

@end
