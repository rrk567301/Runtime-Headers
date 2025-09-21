@class QCNumberPort;

@interface QCSystemTime : QCPatch {
    QCNumberPort *outputTime;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;

- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
