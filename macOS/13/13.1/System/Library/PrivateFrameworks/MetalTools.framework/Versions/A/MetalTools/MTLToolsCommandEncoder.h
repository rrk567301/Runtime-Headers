@class NSString;
@protocol MTLToolsRetainingContainer, MTLDevice;

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder>

@property (readonly, nonatomic) id<MTLToolsRetainingContainer> commandBuffer;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (void)endEncoding;
- (void)insertDebugSignpost:(id)a0;
- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (unsigned long long)globalTraceObjectID;
- (void)addRetainedObject:(id)a0;
- (id)initWithBaseObject:(id)a0 parallelRenderCommandEncoder:(id)a1;
- (unsigned long long)numThisCommand;

@end
