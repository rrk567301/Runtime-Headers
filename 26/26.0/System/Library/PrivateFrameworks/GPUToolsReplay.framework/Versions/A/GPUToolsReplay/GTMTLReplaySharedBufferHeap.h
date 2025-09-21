@class GTMTLReplaySharedResourcePool;
@protocol MTLBuffer;

@interface GTMTLReplaySharedBufferHeap : NSObject {
    id<MTLBuffer> _buffer;
    GTMTLReplaySharedResourcePool *_resourcePool;
}

- (id)buffer;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0 resourcePool:(id)a1;

@end
