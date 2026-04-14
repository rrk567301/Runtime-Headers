@interface MTLIOAccelCommandEncoder : _MTLCommandEncoder

- (id)initWithCommandBuffer:(id)a0;
- (unsigned long long)globalTraceObjectID;
- (void)setLabel:(id)a0;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)a0;
- (void)endEncoding;

@end
