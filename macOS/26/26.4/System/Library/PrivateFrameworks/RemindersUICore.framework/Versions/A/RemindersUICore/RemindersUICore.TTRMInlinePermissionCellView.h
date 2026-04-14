@interface RemindersUICore.TTRMInlinePermissionCellView : NUITableViewContainerCell <NUIContainerViewDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ hostingView;
    void /* unknown type, empty encoding */ preferredCellHeight;
}

@property (class, nonatomic, readonly) Class containerViewClass;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (void)containerViewDidLoad;

@end
