@class NSTextView, NSTextLayoutFragment;

@interface _NSTextViewportElementView : NSView {
    NSTextView *_textView;
}

@property (readonly) NSTextLayoutFragment *element;

- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_windowChangedKeyState;
- (void)viewDidMoveToSuperview;
- (BOOL)shouldBeArchived;
- (id)initWithElement:(id)a0;
- (void)updateWithTextView:(id)a0 display:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderingSurfaceBounds;

@end
