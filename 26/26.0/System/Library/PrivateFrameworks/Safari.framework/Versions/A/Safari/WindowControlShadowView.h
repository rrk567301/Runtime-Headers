@class NSArray, NSImageView;

@interface WindowControlShadowView : NSView {
    NSImageView *_shadowImageView;
    NSArray *_controlRelativeFrames;
}

+ (id)windowControlShadowViewWithWindow:(id)a0;

- (void)mouseDown:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;

@end
