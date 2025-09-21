@class NSString, NSError;
@protocol MTLCommandQueue, MTLDevice, MTLLogContainer;

@interface CCSnoopMTLCommandBuffer : CCSnoop <MTLCommandBuffer>

@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLCommandQueue> commandQueue;
@property (readonly) BOOL retainedReferences;
@property (readonly) unsigned long long errorOptions;
@property (copy) NSString *label;
@property (readonly) double kernelStartTime;
@property (readonly) double kernelEndTime;
@property (readonly) id<MTLLogContainer> logs;
@property (readonly) double GPUStartTime;
@property (readonly) double GPUEndTime;
@property (readonly) unsigned long long status;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (id)computeCommandEncoderWithDescriptor:(id)a0;
- (id)computeCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (id)initWithMTLCommandBuffer:(id)a0 forResult:(id)a1;

@end
