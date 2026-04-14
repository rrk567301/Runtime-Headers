@class QCStructurePort, QCIndexPort, QCMeshPort;

@interface QCMeshPropertyGetter : QCPatch {
    QCMeshPort *inputMesh;
    QCIndexPort *_inputProperty;
    QCStructurePort *outputValue;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)state;
- (BOOL)setState:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)_forwardRenderingFlag;

@end
