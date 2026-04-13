@class QCImageTextureBuffer, QCImagePort, QCCGLContext, QCIndexPort, QCPixelFormat, QCBooleanPort;

@interface QCRenderInImage : QCPatch {
    QCBooleanPort *inputRender;
    QCIndexPort *inputTarget;
    QCBooleanPort *inputMipmaps;
    QCIndexPort *inputWidth;
    QCIndexPort *inputHeight;
    QCImagePort *outputImage;
    QCPixelFormat *_format;
    BOOL _noDepthBuffer;
    BOOL _noFeedback;
    BOOL _colorCorrection;
    QCPixelFormat *_renderFormat;
    QCImageTextureBuffer *_renderedImage;
    QCImageTextureBuffer *_currentImage;
    QCCGLContext *_activeContext;
}

+ (BOOL)isSafe;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)a0;
+ (BOOL)usesLocalContextForIdentifier:(id)a0;

- (id)state;
- (BOOL)_enabled;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)setPixelFormat:(id)a0;
- (id)pixelFormat;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)cleanup:(id)a0;
- (BOOL)_executeSubpatches:(double)a0 arguments:(id)a1;
- (BOOL)executeSubpatches:(double)a0 arguments:(id)a1;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (void)_updateRenderFormat:(id)a0;
- (void)setNoDepthBuffer:(BOOL)a0;
- (BOOL)noDepthBuffer;
- (void)setNoFeedback:(BOOL)a0;
- (BOOL)noFeedback;
- (struct { unsigned char x0[16]; })md5WithTime:(double)a0 arguments:(id)a1;

@end
