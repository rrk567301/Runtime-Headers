@class QCImagePort, QCIndexPort, QCMeshPort;

@interface QCMeshMaterialSetter : QCPatch {
    QCMeshPort *inputMesh;
    QCIndexPort *inputIndex;
    QCImagePort *inputImage;
    QCMeshPort *outputMesh;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)_forwardRenderingFlag;

@end
