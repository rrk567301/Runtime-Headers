@interface MTLIOAccelCommandEncoder : _MTLCommandEncoder

- (void)popDebugGroup;
- (void)setLabel:(id)a0;
- (unsigned long long)globalTraceObjectID;
- (id)initWithCommandBuffer:(id)a0;
- (void)pushDebugGroup:(id)a0;
- (void)endEncoding;

@end
