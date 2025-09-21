@interface MADPixelBufferProcesser : NSObject {
    struct CF<OpaqueVTPixelRotationSession *> { struct OpaqueVTPixelRotationSession *value_; } _rotationSession;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pool;
    unsigned long long _bufferWidth;
    unsigned long long _bufferHeight;
    unsigned int _pixelFormat;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_configurePixelRotationSessionWithOrientation:(unsigned int)a0;
- (int)_createPixelBuffer:(struct __CVBuffer **)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 format:(unsigned int)a3;
- (int)processPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 scaledWidth:(unsigned long long)a3 scaledHeight:(unsigned long long)a4 pixelFormat:(unsigned int)a5 output:(struct __CVBuffer **)a6;

@end
