@class QCProgrammablePatchView;

@interface QCExpressionUI : QCInspector {
    QCProgrammablePatchView *expressionView;
}

+ (id)viewNibName;

- (void)setupViewForPatch:(id)a0;
- (void)resetView;

@end
