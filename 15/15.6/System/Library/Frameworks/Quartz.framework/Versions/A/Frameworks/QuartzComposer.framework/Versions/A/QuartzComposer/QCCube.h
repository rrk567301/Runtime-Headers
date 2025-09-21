@class QCOpenGLPort_Color, QCOpenGLPort_ZBuffer, QCOpenGLPort_Image, QCOpenGLPort_Culling, QCNumberPort, QCOpenGLPort_Blending;

@interface QCCube : QCRenderingPatch {
    QCNumberPort *inputX;
    QCNumberPort *inputY;
    QCNumberPort *inputZ;
    QCNumberPort *inputRX;
    QCNumberPort *inputRY;
    QCNumberPort *inputRZ;
    QCNumberPort *inputWidth;
    QCNumberPort *inputHeight;
    QCNumberPort *inputDepth;
    QCOpenGLPort_Color *inputColorFront;
    QCOpenGLPort_Image *inputImageFront;
    QCOpenGLPort_Color *inputColorLeft;
    QCOpenGLPort_Image *inputImageLeft;
    QCOpenGLPort_Color *inputColorRight;
    QCOpenGLPort_Image *inputImageRight;
    QCOpenGLPort_Color *inputColorBack;
    QCOpenGLPort_Image *inputImageBack;
    QCOpenGLPort_Color *inputColorTop;
    QCOpenGLPort_Image *inputImageTop;
    QCOpenGLPort_Color *inputColorBottom;
    QCOpenGLPort_Image *inputImageBottom;
    QCOpenGLPort_Blending *inputBlending;
    QCOpenGLPort_ZBuffer *inputZBuffer;
    QCOpenGLPort_Culling *inputCulling;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (char)allowsScissors:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
