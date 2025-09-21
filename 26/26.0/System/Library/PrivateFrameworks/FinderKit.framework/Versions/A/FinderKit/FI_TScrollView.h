@interface FI_TScrollView : NSScrollView

@property (nonatomic) unsigned long long controlSize;

- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)initCommon;
- (void)viewWillMoveToSuperview:(id)a0;

@end
