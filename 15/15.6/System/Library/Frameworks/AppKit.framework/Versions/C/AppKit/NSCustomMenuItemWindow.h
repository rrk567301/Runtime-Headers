@interface NSCustomMenuItemWindow : NSWindow <NSMenuWindow> {
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ menuItem;
    void /* unknown type, empty encoding */ isHighlighted;
}

@property (nonatomic) unsigned long long styleMask;
@property (nonatomic, readonly) char keyWindow;
@property (nonatomic) char canHide;
@property (nonatomic, readonly) char _allowsActiveInputContextDuringMenuTracking;
@property (nonatomic, readonly) char _isScreenLayoutAware;
@property (nonatomic, readonly) char _isConsideredForActivation;
@property (nonatomic, readonly) char _windowManagerAware;
@property (nonatomic, readonly) char canBecomeKeyWindow;

+ (char)accessibilityIsIgnored;

- (void).cxx_destruct;
- (void)resignKeyWindow;
- (char)_allowsOrdering;
- (char)_hasActiveAppearanceIgnoringKeyFocus;
- (char)_hasActiveControls;
- (char)_ignoredForScripting;
- (char)_isKeyWindow;
- (char)_preventsActivation;
- (char)hasKeyAppearance;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (char)isKeyWindow;
- (void)makeKeyWindow;
- (void)sendEvent:(id)a0;

@end
