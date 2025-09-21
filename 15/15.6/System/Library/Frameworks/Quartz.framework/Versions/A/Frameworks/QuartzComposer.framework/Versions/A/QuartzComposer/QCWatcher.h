@class QCPort, QCBooleanPort;

@interface QCWatcher : QCPatch {
    QCBooleanPort *outputSignal;
    unsigned long long _lastTimestamp;
    QCPort *_inPort;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (char)setup:(id)a0;
- (void)updateTimebase:(int)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (Class)portClass;
- (void)setPortClass:(Class)a0;

@end
