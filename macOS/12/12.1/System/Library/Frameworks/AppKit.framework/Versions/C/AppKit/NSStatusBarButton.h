@interface NSStatusBarButton : NSButton

@property BOOL appearsDisabled;

+ (void)initialize;

- (void)setImage:(id)a0;
- (void)rightMouseDown:(id)a0;
- (SEL)doubleAction;
- (void)setDoubleAction:(SEL)a0;
- (void)setBackgroundStyle:(long long)a0;
- (id)_statusItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inStatusBar:(id)a1;
- (id)statusMenu;
- (void)setStatusMenu:(id)a0;
- (BOOL)looksDisabled;
- (void)setLooksDisabled:(BOOL)a0;
- (void)setSelectionInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })selectionInset;

@end
