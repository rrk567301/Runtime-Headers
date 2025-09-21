@class QCImageTextureBuffer, QCImagePort, QCCGLContext, QCIndexPort, QCPixelFormat, QCBooleanPort;

@interface QCRenderInImage : QCPatch {
    QCBooleanPort *inputRender;
    QCIndexPort *inputTarget;
    QCBooleanPort *inputMipmaps;
    QCIndexPort *inputWidth;
    QCIndexPort *inputHeight;
    QCImagePort *outputImage;
    QCPixelFormat *_format;
    char _noDepthBuffer;
    char _noFeedback;
    char _colorCorrection;
    QCPixelFormat *_renderFormat;
    QCImageTextureBuffer *_renderedImage;
    QCImageTextureBuffer *_currentImage;
    QCCGLContext *_activeContext;
}

+ (char)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (char)supportsOptimizedExecutionForIdentifier:(id)a0;
+ (char)usesLocalContextForIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (void)setPixelFormat:(id)a0;
- (id)pixelFormat;
- (char)_enabled;
- (char)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (char)_executeSubpatches:(double)a0 arguments:(id)a1;
- (void)_updateRenderFormat:(id)a0;
- (void)cleanup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (char)executeSubpatches:(double)a0 arguments:(id)a1;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;
- (char)noDepthBuffer;
- (char)noFeedback;
- (void)setNoDepthBuffer:(char)a0;
- (void)setNoFeedback:(char)a0;

@end
