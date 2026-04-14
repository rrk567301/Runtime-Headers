@class QCArray, NSMutableArray, QCBooleanPort;

@interface QCPhysicsEffect : QCPatch {
    QCBooleanPort *inputSampling;
    NSMutableArray *_inputValues;
    NSMutableArray *_outputValues;
    QCArray *_times;
    QCArray *_value;
    QCArray *_savedOutputValues;
}

+ (BOOL)isSafe;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;
+ (id)stateArrays;

- (void)dealloc;
- (id)state;
- (BOOL)setState:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)numberOfInputs;
- (BOOL)setup:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setNumberOfInputs:(unsigned long long)a0;

@end
