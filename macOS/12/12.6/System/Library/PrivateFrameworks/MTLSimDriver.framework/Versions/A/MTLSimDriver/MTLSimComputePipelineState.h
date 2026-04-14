@class NSString, MTLSimDevice;
@protocol MTLDevice;

@interface MTLSimComputePipelineState : _MTLComputePipelineState <MTLComputePipelineState, MTLSerializerComputePipelineState> {
    MTLSimDevice *_device;
    unsigned int _pipelineRef;
    unsigned long long _uniqueIdentifier;
}

@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic) unsigned long long threadExecutionWidth;
@property (nonatomic) unsigned long long staticThreadgroupMemoryLength;
@property (nonatomic) BOOL supportIndirectCommandBuffers;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)uniqueIdentifier;
- (id)initWithDevice:(id)a0 pipelineRef:(unsigned int)a1 descriptor:(id)a2;
- (unsigned int)pipelineRef;

@end
