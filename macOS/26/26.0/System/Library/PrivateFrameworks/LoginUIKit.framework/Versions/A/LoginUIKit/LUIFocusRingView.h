@class NSView, NSBitmapImageRep;

@interface LUIFocusRingView : NSView {
    NSView *_focusedView;
    NSBitmapImageRep *_focusRingImageRep;
}

+ (void)showForView:(id)a0;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setFocusedView:(id)a0;
- (void).cxx_destruct;
- (id)_focusRingImageRepForView:(id)a0;

@end
