@class NSDictionary;

@interface UVCFrameProcessorRotate : UVCFrameProcessorBase {
    id _pixelBufferPool;
    unsigned long long _rollAngle;
    id _imageRotateSession;
    NSDictionary *_pixelBufferAuxAttributes;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0 destination:(id)a1 queue:(id)a2;
- (void)processStreamData:(id)a0 error:(id)a1 args:(id)a2;
- (BOOL)setupRotationSession:(id)a0;
- (void)invalidateRotationSession;
- (id)getCVPixelBufferFromData:(id)a0;
- (id)getTimingInfoFromData:(id)a0 args:(id)a1;

@end
