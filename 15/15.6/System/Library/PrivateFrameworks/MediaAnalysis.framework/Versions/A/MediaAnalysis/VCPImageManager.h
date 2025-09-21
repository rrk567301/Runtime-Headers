@class NSObject;
@protocol OS_dispatch_queue;

@interface VCPImageManager : NSObject {
    struct CMPhotoCompressionSession { } *_encodeSession;
    struct CMPhotoDecompressionSession { } *_decodeSession;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    NSObject<OS_dispatch_queue> *_transcodeQueue;
}

+ (char)loggingEnabled;
+ (id)sharedImageManager;
+ (char)_exportReencodedJPEG;
+ (char)allowFastPathDecodeWithUniformType:(id)a0 pixelWidth:(unsigned long long)a1 andPixelHeight:(unsigned long long)a2;
+ (char)canDecodeAcceleratedUniformTypeIdentifier:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)flushCache;
- (int)compressCVPixelBuffer:(struct __CVBuffer { } *)a0 toJPEGData:(id *)a1 targetBitStreamLength:(unsigned long long)a2 padding:(char)a3;
- (int)drawImage:(struct CGImage { } *)a0 pixelFormat:(int)a1 withOrientation:(unsigned int)a2 maxDimension:(unsigned long long)a3 pixelBuffer:(struct __CVBuffer **)a4;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 andMaxDimension:(unsigned long long)a1 fromImageURL:(id)a2 orientation:(unsigned int *)a3;
- (int)acceleratedDecodeImageData:(id)a0 pixelFormat:(int)a1 maxDimension:(unsigned long long)a2 pixelBuffer:(struct __CVBuffer **)a3 orientation:(unsigned int *)a4 flushCache:(char)a5;
- (int)convertPixelBuffer:(struct __CVBuffer **)a0 toPixelFormat:(int)a1 flushCache:(char)a2;
- (int)createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(int)a2 pixelBuffer:(struct __CVBuffer **)a3;
- (id)dataForResource:(id)a0;
- (int)decodeImageSource:(struct CGImageSource { } *)a0 withUniformTypeIdentifier:(id)a1 pixelFormat:(int)a2 maxDimension:(unsigned long long)a3 orientation:(unsigned int *)a4 pixelBuffer:(struct __CVBuffer **)a5;
- (struct __CVBuffer { } *)imageForResource:(id)a0 pixelFormat:(int)a1;
- (struct __CVBuffer { } *)imageForResource:(id)a0 pixelFormat:(int)a1 maxDimension:(unsigned long long)a2;
- (struct __CVBuffer { } *)imageForResource:(id)a0 pixelFormat:(int)a1 maxDimension:(unsigned long long)a2 orientation:(unsigned int *)a3;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 andMaxDimension:(unsigned long long)a1 fromData:(id)a2 withUniformTypeIdentifier:(id)a3 flushCache:(char)a4 orientation:(unsigned int *)a5;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 andMaxDimension:(unsigned long long)a1 fromImageURL:(id)a2;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 andMaxDimension:(unsigned long long)a1 fromImageURL:(id)a2 flushCache:(char)a3 orientation:(unsigned int *)a4;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 fromImageURL:(id)a1 flushCache:(char)a2;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 fromImageURL:(id)a1 flushCache:(char)a2 orientation:(unsigned int *)a3;

@end
