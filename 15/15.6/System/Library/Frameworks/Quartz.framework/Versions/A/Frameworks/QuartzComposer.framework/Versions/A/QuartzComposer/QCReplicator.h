@class QCInterpolationPort, QCIndexPort, QCNumberPort;

@interface QCReplicator : QCPatch {
    QCIndexPort *inputCopies;
    QCInterpolationPort *inputInterpolation;
    QCNumberPort *inputScale;
    QCNumberPort *inputOrientationX;
    QCNumberPort *inputOrientationY;
    QCNumberPort *inputOrientationZ;
    QCNumberPort *inputOriginX;
    QCNumberPort *inputOriginY;
    QCNumberPort *inputOriginZ;
    QCNumberPort *inputRotationX;
    QCNumberPort *inputRotationY;
    QCNumberPort *inputRotationZ;
    QCNumberPort *inputTranslationX;
    QCNumberPort *inputTranslationY;
    QCNumberPort *inputTranslationZ;
}

+ (char)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;
+ (char)supportsOptimizedExecutionForIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
