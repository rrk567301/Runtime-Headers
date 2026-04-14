@interface IOGPUMetalCommandEncoder : _MTLCommandEncoder

- (unsigned long long)globalTraceObjectID;
- (void)popDebugGroup;
- (void)setLabel:(id)a0;
- (void)pushDebugGroup:(id)a0;
- (id)initWithCommandBuffer:(id)a0;
- (void)endEncoding;

@end
