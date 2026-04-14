@class QCPort, QCIndexPort, NSMutableArray;

@interface QCDemultiplexer : QCPatch {
    QCIndexPort *inputIndex;
    NSMutableArray *_outPorts;
    QCPort *_inPort;
    QCPort *_resetPort;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (unsigned long long)outputCount;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (Class)portClass;
- (void)setPortClass:(Class)a0;
- (void)setOutputCount:(unsigned long long)a0;
- (void)setResetOutputs:(BOOL)a0;
- (BOOL)resetOutputs;

@end
