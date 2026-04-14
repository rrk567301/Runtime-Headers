@class GTMTLReplaySharedBufferHeap;
@protocol MTLBuffer;

@interface GTMTLReplaySharedBufferRange : NSObject {
    GTMTLReplaySharedBufferHeap *_heap;
    id<MTLBuffer> _heapBuffer;
    struct _NSRange { unsigned long long location; unsigned long long length; } _heapRange;
}

- (void *)contents;
- (unsigned long long)length;
- (void).cxx_destruct;
- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)heapBuffer;
- (unsigned long long)heapLocation;
- (id)initWithHeap:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)tensorAlias:(id)a0;

@end
