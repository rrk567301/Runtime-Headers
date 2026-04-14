@class QCIndexPort, QCStructurePort, QCMeshPort;

@interface QCMeshPropertySetter : QCPatch {
    QCMeshPort *inputMesh;
    QCStructurePort *inputValue;
    QCIndexPort *_inputProperty;
    QCMeshPort *outputMesh;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)state;
- (BOOL)setState:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)_forwardRenderingFlag;

@end
