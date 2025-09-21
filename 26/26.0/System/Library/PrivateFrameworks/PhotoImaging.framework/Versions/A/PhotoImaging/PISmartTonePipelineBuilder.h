@class NUIdentifier;

@interface PISmartTonePipelineBuilder : NSObject <NUPipelineBuilder>

@property (readonly, nonatomic) NUIdentifier *identifier;

- (BOOL)buildPipeline:(id)a0 error:(out id *)a1;
- (id)_buildHighKeyPipeline:(id)a0 input:(id)a1 adjustment:(id)a2 canPerformLocalAdjustments:(id)a3 error:(out id *)a4;
- (id)_buildLocalLightPipeline:(id)a0 input:(id)a1 guide:(id)a2 adjustment:(id)a3 error:(out id *)a4;
- (id)_buildPipeline:(id)a0 input:(id)a1 guide:(id)a2 adjustment:(id)a3 canPerformLocalAdjustments:(id)a4 error:(out id *)a5;
- (id)_buildSmartTonePipeline:(id)a0 input:(id)a1 adjustment:(id)a2 canPerformLocalAdjustments:(id)a3 error:(out id *)a4;

@end
