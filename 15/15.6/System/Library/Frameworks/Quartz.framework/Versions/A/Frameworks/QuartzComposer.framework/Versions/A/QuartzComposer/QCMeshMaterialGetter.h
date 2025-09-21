@class QCImagePort, QCIndexPort, QCMeshPort;

@interface QCMeshMaterialGetter : QCPatch {
    QCMeshPort *inputMesh;
    QCIndexPort *inputIndex;
    QCImagePort *outputImage;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)_forwardRenderingFlag;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
