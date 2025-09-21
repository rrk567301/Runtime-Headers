@class QCOpenGLPort_ZBuffer, QCOpenGLPort_Culling, QCOpenGLPort_Blending, QCNumberPort, QCIndexPort;

@interface QCGrid : QCPatch {
    QCNumberPort *inputX;
    QCNumberPort *inputY;
    QCNumberPort *inputZ;
    QCNumberPort *inputRX;
    QCNumberPort *inputRY;
    QCNumberPort *inputRZ;
    QCNumberPort *inputWidth;
    QCNumberPort *inputHeight;
    QCIndexPort *inputWidthResolution;
    QCIndexPort *inputHeightResolution;
    QCOpenGLPort_Blending *inputBlending;
    QCOpenGLPort_ZBuffer *inputZBuffer;
    QCOpenGLPort_Culling *inputCulling;
    float *_gridArray;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (void)_drawGrid:(id)a0;
- (void)cleanup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
