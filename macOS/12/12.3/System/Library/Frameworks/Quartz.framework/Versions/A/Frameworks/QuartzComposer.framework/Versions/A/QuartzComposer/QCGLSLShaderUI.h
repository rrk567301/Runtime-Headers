@class QCProgrammablePatchView;

@interface QCGLSLShaderUI : QCInspector {
    QCProgrammablePatchView *vertexView;
    QCProgrammablePatchView *fragmentView;
}

+ (id)viewNibName;

- (void)setupViewForPatch:(id)a0;
- (void)resetView;

@end
