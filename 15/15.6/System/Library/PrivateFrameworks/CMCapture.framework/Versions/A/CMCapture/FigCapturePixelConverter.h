@class BWPixelBufferPool, BWVideoFormat;

@interface FigCapturePixelConverter : NSObject {
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    BWPixelBufferPool *_pool;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    int _poolCapacity;
    char _prefetchPool;
}

@property (readonly, nonatomic) BWVideoFormat *outputFormat;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (int)convertPixelBuffer:(struct __CVBuffer { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 allocateOutputFromBufferPool:(char)a2 outputPixelBuffer:(struct __CVBuffer **)a3;
- (int)convertSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outputSampleBuffer:(struct opaqueCMSampleBuffer **)a2;
- (id)initWithPrefetchPool:(char)a0;
- (int)updateOutputPixelFormat:(unsigned int)a0 dimensions:(struct { int x0; int x1; })a1 poolCapacity:(int)a2 colorSpaceProperties:(int)a3;

@end
