@class QCVirtualPort, QCStructurePort, QCIndexPort, NSMutableArray, QCBooleanPort;

@interface QCQueue : QCPatch {
    QCVirtualPort *inputValue;
    QCIndexPort *inputSize;
    QCBooleanPort *inputFilling;
    QCBooleanPort *inputResetSignal;
    QCStructurePort *outputQueue;
    char _continuous;
    NSMutableArray *_queue;
    char _lastResetSignal;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)setContinuous:(char)a0;
- (char)setup:(id)a0;
- (void)updateTimebase:(int)a0;
- (void)_forwardRenderingFlag;
- (void)cleanup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
