@class QCStructurePort, QCIndexPort, QCMeshPort;

@interface QCMeshPropertyGetter : QCPatch {
    QCMeshPort *inputMesh;
    QCIndexPort *_inputProperty;
    QCStructurePort *outputValue;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (void)_forwardRenderingFlag;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
