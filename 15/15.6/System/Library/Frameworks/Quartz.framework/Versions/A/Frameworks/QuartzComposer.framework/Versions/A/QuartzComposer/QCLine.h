@class QCOpenGLPort_ZBuffer, QCNumberPort, QCColorPort;

@interface QCLine : QCRenderingPatch {
    QCNumberPort *inputStartX;
    QCNumberPort *inputStartY;
    QCNumberPort *inputStartZ;
    QCColorPort *inputStartColor;
    QCNumberPort *inputEndX;
    QCNumberPort *inputEndY;
    QCNumberPort *inputEndZ;
    QCColorPort *inputEndColor;
    QCNumberPort *inputLineWidth;
    QCOpenGLPort_ZBuffer *inputZBuffer;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (char)allowsScissors:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
