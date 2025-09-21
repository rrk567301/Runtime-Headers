@class QCNumberPort;

@interface QCProjection : QCPatch {
    QCNumberPort *inputFieldOfView;
}

+ (char)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;
+ (char)usesLocalContextForIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
