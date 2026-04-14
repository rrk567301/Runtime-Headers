@interface QLDisplayBundleContainerView : NSView

@property (nonatomic, weak) void /* function */ delegate;

- (void)_intelligenceCollectContentIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collector:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)setHasCornerRadius:(BOOL)a0;
- (void)setQuickLookFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
