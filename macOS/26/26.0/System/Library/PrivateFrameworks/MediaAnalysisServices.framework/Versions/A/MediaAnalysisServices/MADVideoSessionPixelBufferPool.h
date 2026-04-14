@interface MADVideoSessionPixelBufferPool : NSObject {
    unsigned int _width;
    unsigned int _height;
    unsigned int _pixelFormat;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pixelBufferPool;
    struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } _transferSession;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)copyPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer **)a1;

@end
