@class GTMTLReplaySharedResourcePool;
@protocol MTLBuffer;

@interface GTMTLReplaySharedBufferHeap : NSObject {
    id<MTLBuffer> _buffer;
    GTMTLReplaySharedResourcePool *_resourcePool;
}

- (id)buffer;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBuffer:(id)a0 resourcePool:(id)a1;

@end
