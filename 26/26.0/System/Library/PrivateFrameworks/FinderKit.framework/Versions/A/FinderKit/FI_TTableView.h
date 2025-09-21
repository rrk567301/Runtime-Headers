@interface FI_TTableView : NSTableView

@property (nonatomic) BOOL acceptsFirstMouse;
@property (nonatomic) BOOL autoforwardsScrollWheelEvents;
@property unsigned long long controlSize;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)initCommon;
- (void)addTableColumn:(id)a0;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)awakeFromNib;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)awakeCommon;

@end
