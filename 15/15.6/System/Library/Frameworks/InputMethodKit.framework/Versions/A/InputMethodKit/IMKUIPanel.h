@class NSView, NSVisualEffectView;

@interface IMKUIPanel : NSPanel

@property (retain, nonatomic) NSView *clipView;
@property (retain, nonatomic) NSVisualEffectView *effectView;
@property (weak, nonatomic) NSView *accessibilityHitTestView;

- (void).cxx_destruct;
- (id)accessibilitySubroleAttribute;
- (id)accessibilityTitle;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(char)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(char)a1 animate:(char)a2;
- (void)animateWindowFrameForExtension:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completionHandler:(id /* block */)a1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3 flipped:(char)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(char)a1;
- (id)initWithUpdateLayerUsingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)logViewHierarchy;
- (void)logViewsWithNumberOfTabs:(unsigned long long)a0 view:(id)a1;
- (void)setWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animation:(char)a1 completionHandler:(id /* block */)a2;
- (void)updateClipViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
