@interface WorkflowEditor.ActionCellHeaderView : WorkflowEditor.WFFrameLayoutPlatformView {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ $__lazy_storage_$_summaryView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconViewHost;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deleteButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expansionButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionAuxiliaryButton;
    void /* unknown type, empty encoding */ state;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)removeAction;
- (void)handleAuxiliaryButtonClick;
- (void)handleExpansionButtonClick;

@end
