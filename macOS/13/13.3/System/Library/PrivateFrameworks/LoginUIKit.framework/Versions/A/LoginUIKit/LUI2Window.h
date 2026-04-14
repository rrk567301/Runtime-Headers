@protocol LUI2WindowDelegate;

@interface LUI2Window : NSWindow

@property (retain) LUI2Window *companionWindow;
@property BOOL isCompanionWindow;
@property id<LUI2WindowDelegate> delegate;
@property BOOL isSecondary;
@property BOOL usesCompanionWindow;

- (void)dealloc;
- (id)description;
- (id)accessibilityIdentifier;
- (id)accessibilityTitle;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3 screen:(id)a4;
- (void)orderFront:(id)a0;
- (void)orderOut:(id)a0;
- (void)sendEvent:(id)a0;
- (void)_makeCompanionWindow;
- (void)_setupContentView;
- (void)setNeverFlattenSurfaces;

@end
