@class NSObject, AVAsset, AVAssetWriterInput, NSMutableArray, AVAssetWriter;
@protocol OS_dispatch_semaphore;

@interface VCPSimpleMovieAssetWriter : NSObject {
    AVAsset *_asset;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_input;
    NSMutableArray *_sampleQueue;
    NSObject<OS_dispatch_semaphore> *_enqueueSemaphore;
    NSObject<OS_dispatch_semaphore> *_dequeueSemaphore;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _status;
    unsigned int _orientation;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pixelBufferPool;
    struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } _transferSession;
}

+ (id)assetWriterWithURL:(id)a0 orientation:(unsigned int)a1;
+ (id)assetWriterWithURL:(id)a0;

- (void)dealloc;
- (int)finish;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)addPixelBuffer:(struct __CVBuffer { } *)a0 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (int)copyPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer **)a1;
- (int)createAssetWriterInputWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)initWithURL:(id)a0 orientation:(unsigned int)a1;
- (struct opaqueCMSampleBuffer { } *)popSample;
- (void)processMediaRequest;
- (void)pushSample:(struct opaqueCMSampleBuffer { } *)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })trackMatrixForWidth:(unsigned long long)a0 height:(unsigned long long)a1 orientation:(unsigned int)a2;

@end
