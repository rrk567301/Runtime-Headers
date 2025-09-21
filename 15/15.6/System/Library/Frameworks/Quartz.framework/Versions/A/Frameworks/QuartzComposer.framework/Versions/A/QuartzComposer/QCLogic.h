@class QCIndexPort, QCBooleanPort;

@interface QCLogic : QCPatch {
    QCBooleanPort *inputValue1;
    QCIndexPort *inputOperation;
    QCBooleanPort *inputValue2;
    QCBooleanPort *outputResult;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (id)nodeActorForView:(id)a0;

@end
