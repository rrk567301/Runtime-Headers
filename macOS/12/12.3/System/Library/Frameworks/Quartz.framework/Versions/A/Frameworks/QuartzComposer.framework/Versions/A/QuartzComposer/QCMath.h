@class QCNumberPort, NSMutableArray;

@interface QCMath : QCPatch {
    QCNumberPort *inputValue;
    QCNumberPort *outputValue;
    NSMutableArray *_operationPorts;
}

+ (BOOL)isSafe;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (id)nodeActorForView:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setNumberOfOperations:(unsigned long long)a0;
- (unsigned long long)numberOfOperations;

@end
