@class QCNumberPort;

@interface QCCamera : QCPatch {
    QCNumberPort *inputOriginX;
    QCNumberPort *inputOriginY;
    QCNumberPort *inputOriginZ;
    QCNumberPort *inputRotateX;
    QCNumberPort *inputRotateY;
    QCNumberPort *inputRotateZ;
    QCNumberPort *inputTranslateX;
    QCNumberPort *inputTranslateY;
    QCNumberPort *inputTranslateZ;
    QCNumberPort *inputScaleX;
    QCNumberPort *inputScaleY;
    QCNumberPort *inputScaleZ;
}

+ (char)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;
+ (char)supportsOptimizedExecutionForIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTimeForSubpatches:(id)a0 time:(double)a1 arguments:(id)a2;

@end
