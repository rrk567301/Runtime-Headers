@class NSString, VCPVideoInterpolationSession;

@interface VTLowLatencyFrameInterpolationImplementation : NSObject <VTFrameProcessorImplementationPrivate> {
    VCPVideoInterpolationSession *_vcpFrameInterpolationProcessor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)finishProcessing;
- (void)processWithParameters:(id)a0 frameOutputHandler:(id /* block */)a1;
- (BOOL)processWithParams:(id)a0 error:(id *)a1;
- (BOOL)startSessionWithConfiguration:(id)a0 error:(id *)a1;

@end
