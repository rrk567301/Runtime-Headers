@interface WorkflowEditor.ActionCellContentView : WorkflowEditor.WFFrameLayoutPlatformView {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ progressLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_warningView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionHeaderView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_auxiliaryContentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dimmingOverlayView;
    void /* unknown type, empty encoding */ cancellables;
}

- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;

@end
