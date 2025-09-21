@interface QCOpenGLRenderState : QCGraphicsRenderState {
    long long currentVirtualScreen;
    float currentFieldOfView;
    float saveFieldOfView;
    char saveFlipped;
    char saveResetMatrices;
    int saveFace;
    int saveMode;
    double saveModelView[16];
    double saveProjection[16];
    int saveScissorFrame[4];
    char saveScissorEnabled;
}

- (id)initWithContext:(id)a0 patch:(id)a1;

@end
