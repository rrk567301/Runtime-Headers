@class QCPort, QCIndexPort, NSMutableArray;

@interface QCMultiplexer : QCPatch {
    QCIndexPort *inputIndex;
    NSMutableArray *_inPorts;
    QCPort *_outPort;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (BOOL)setState:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)inputCount;
- (void)setInputCount:(unsigned long long)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)_forwardRenderingFlag;
- (void)setPortClass:(Class)a0;
- (Class)portClass;
- (id)_activePort;

@end
