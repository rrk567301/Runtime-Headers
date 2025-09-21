@class QCBooleanPort, QCStructurePort, QCStringPort;

@interface QCSpotlight : QCThreadPatch {
    QCStringPort *inputQuery;
    QCBooleanPort *inputSignal;
    QCStructurePort *outputFiles;
    QCBooleanPort *outputSignal;
    char _keylessStructures;
    char _lastSignal;
    char _rerun;
    char _gathering;
}

+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (void)_matadorThread:(id)a0;
- (void)__finish:(id)a0;
- (void)cleanup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
