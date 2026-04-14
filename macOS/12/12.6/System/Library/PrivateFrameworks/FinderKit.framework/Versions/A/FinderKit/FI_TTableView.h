@interface FI_TTableView : NSTableView

@property (nonatomic) BOOL acceptsFirstMouse;
@property (nonatomic) BOOL autoforwardsScrollWheelEvents;
@property unsigned long long controlSize;

- (id)initWithCoder:(id)a0;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void)_windowChangedKeyState;
- (void)setAutoforwardsScrollWheelEvents:(BOOL)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)addTableColumn:(id)a0;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)autoforwardsScrollWheelEvents;
- (void)initCommon;
- (void)awakeCommon;

@end
