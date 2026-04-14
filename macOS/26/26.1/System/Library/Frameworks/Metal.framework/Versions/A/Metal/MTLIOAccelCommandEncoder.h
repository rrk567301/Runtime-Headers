@interface MTLIOAccelCommandEncoder : _MTLCommandEncoder

- (unsigned long long)globalTraceObjectID;
- (void)setLabel:(id)a0;
- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (id)initWithCommandBuffer:(id)a0;
- (void)endEncoding;

@end
