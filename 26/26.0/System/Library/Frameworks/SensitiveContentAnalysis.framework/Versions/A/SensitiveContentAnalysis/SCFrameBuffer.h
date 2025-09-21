@class NSMutableArray;

@interface SCFrameBuffer : NSObject {
    NSMutableArray *_frames;
    unsigned long long _maxFrames;
    double _bufferInterval;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _frameLock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)bufferFrame:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 orientation:(unsigned int)a2;
- (void)dumpFramesWithCompletionHandler:(id /* block */)a0;
- (id)initWithInterval:(double)a0 maxFrames:(unsigned long long)a1;

@end
