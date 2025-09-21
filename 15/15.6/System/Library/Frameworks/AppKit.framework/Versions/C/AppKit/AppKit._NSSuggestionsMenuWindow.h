@interface AppKit._NSSuggestionsMenuWindow : NSWindow

@property (nonatomic, readonly) char canBecomeKeyWindow;
@property (nonatomic, readonly) char canBecomeMainWindow;

- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;

@end
