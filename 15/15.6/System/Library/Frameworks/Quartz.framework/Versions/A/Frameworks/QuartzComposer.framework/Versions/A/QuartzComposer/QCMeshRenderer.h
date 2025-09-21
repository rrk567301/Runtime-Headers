@class QCOpenGLPort_SceneKitBlending, QCMesh, QCOpenGLPort_Color, QCOpenGLPort_ZBuffer, QCOpenGLPort_Mesh, QCNumberPort, QCOpenGLPort_SceneKitCulling, QCImageTextureBuffer, QCArray;

@interface QCMeshRenderer : QCRenderingPatch {
    QCNumberPort *inputX;
    QCNumberPort *inputY;
    QCNumberPort *inputZ;
    QCNumberPort *inputRX;
    QCNumberPort *inputRY;
    QCNumberPort *inputRZ;
    QCNumberPort *inputWidth;
    QCNumberPort *inputHeight;
    QCNumberPort *inputDepth;
    QCOpenGLPort_Color *inputColor;
    QCOpenGLPort_Mesh *inputMesh;
    QCOpenGLPort_SceneKitBlending *inputBlending;
    QCOpenGLPort_ZBuffer *inputZBuffer;
    QCOpenGLPort_SceneKitCulling *inputCulling;
    QCArray *_colors;
    QCMesh *_savedMesh;
    QCImageTextureBuffer *_backFaces;
    QCImageTextureBuffer *_volumeTexture;
    char _wireframe;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (char)allowsInteraction;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)initWithIdentifier:(id)a0;
- (double)depth;
- (double)rotation;
- (struct CGPoint { double x0; double x1; })position;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setRotation:(double)a0;
- (double)scaleX;
- (double)scaleY;
- (void)setScaleX:(double)a0;
- (void)setScaleY:(double)a0;
- (char)setup:(id)a0;
- (char)allowsScissors:(id)a0;
- (char)automaticStateSet:(id)a0;
- (struct _QCDod { } *)createDodForContext:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
