@protocol MTLIndirectCommandBuffer;

@interface CCIndirectCommandBuffer : NSObject {
    id<MTLIndirectCommandBuffer> _indirectCommandBuffer;
}

- (void).cxx_destruct;
- (id)initWithCommands:(id)a0 device:(id)a1 maxKernelBufferBindCount:(unsigned long long)a2;

@end
