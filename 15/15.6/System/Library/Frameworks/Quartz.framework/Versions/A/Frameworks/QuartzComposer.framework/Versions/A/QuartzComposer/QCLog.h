@class QCVirtualPort;

@interface QCLog : QCPatch {
    QCVirtualPort *inputValue;
}

+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;

- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
