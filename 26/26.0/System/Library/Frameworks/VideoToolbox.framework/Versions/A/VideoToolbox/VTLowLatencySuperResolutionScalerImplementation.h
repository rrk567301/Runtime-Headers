@class NSString, VCPFrameSuperResolutionProcessor;

@interface VTLowLatencySuperResolutionScalerImplementation : NSObject <VTFrameProcessorImplementationPrivate> {
    VCPFrameSuperResolutionProcessor *_vcpSuperResolutionProcessor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)finishProcessing;
- (BOOL)processWithParams:(id)a0 error:(id *)a1;
- (BOOL)startSessionWithConfiguration:(id)a0 error:(id *)a1;

@end
