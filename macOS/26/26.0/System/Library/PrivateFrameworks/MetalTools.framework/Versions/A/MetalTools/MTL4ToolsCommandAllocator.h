@class NSString;
@protocol MTLDevice, MTL4CommandBuffer;

@interface MTL4ToolsCommandAllocator : MTLToolsObject <MTL4CommandAllocatorGGDSPI> {
    id<MTL4CommandBuffer> _currentCommandBuffer;
}

@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (unsigned long long)allocatedSize;
- (void)addResetHandler:(id /* block */)a0;
- (void)attachCommandBuffer:(id)a0;
- (id)currentCommandBuffer;
- (void)detachCommandBuffer;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;

@end
