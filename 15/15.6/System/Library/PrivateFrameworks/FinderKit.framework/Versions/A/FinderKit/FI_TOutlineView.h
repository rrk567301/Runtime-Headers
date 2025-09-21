@interface FI_TOutlineView : NSOutlineView

@property (nonatomic) BOOL acceptsFirstMouse;
@property (nonatomic) BOOL autoforwardsScrollWheelEvents;
@property unsigned long long controlSize;

- (id)initWithCoder:(id)a0;
- (void)addTableColumn:(id)a0;
- (void)_windowChangedKeyState;
- (char)acceptsFirstMouse:(id)a0;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initCommon;
- (void)awakeCommon;

@end
