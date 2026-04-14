@class NSString, MTLToolsCommandBuffer;
@protocol MTLDevice;

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder>

@property (readonly, nonatomic) MTLToolsCommandBuffer *commandBuffer;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (void)addRetainedObject:(id)a0;
- (void)endEncoding;
- (void)insertDebugSignpost:(id)a0;
- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (unsigned long long)globalTraceObjectID;
- (unsigned long long)numThisCommand;

@end
