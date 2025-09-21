@class QCPort, QCIndexPort, NSMutableArray;

@interface QCDemultiplexer : QCPatch {
    QCIndexPort *inputIndex;
    NSMutableArray *_outPorts;
    QCPort *_inPort;
    QCPort *_resetPort;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (unsigned long long)outputCount;
- (void)setOutputCount:(unsigned long long)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (Class)portClass;
- (char)resetOutputs;
- (void)setPortClass:(Class)a0;
- (void)setResetOutputs:(char)a0;

@end
