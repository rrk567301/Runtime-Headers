@class QCOpenGLPort_Color, QCOpenGLPort_Image, QCNumberPort, QCOpenGLPort_Blending;

@interface QCPsychedelic : QCPatch {
    QCOpenGLPort_Image *inputImage;
    QCOpenGLPort_Color *inputColor;
    QCNumberPort *inputSpeed;
    QCNumberPort *inputScale;
    QCOpenGLPort_Blending *inputBlending;
    char _clearDepthBuffer;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (char)setup:(id)a0;
- (char)clearsDepthBuffer;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setClearsDepthBuffer:(char)a0;

@end
