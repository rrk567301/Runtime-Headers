@class NSTextView, NSString, NSTextLayoutFragment;

@interface _NSTextViewportElementView : NSView <NSTextViewportRenderingSurface> {
    struct CGPoint { double x; double y; } _renderingOrigin;
    BOOL _prefersHidingOverInvalidation;
}

@property (retain) NSTextLayoutFragment *element;
@property (readonly) NSTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderingSurfaceBounds;
- (void)viewDidMoveToSuperview;
- (void)_windowChangedKeyState;
- (id)initWithElement:(id)a0;
- (id)locationForPoint:(struct CGPoint { double x0; double x1; })a0 textLineFragment:(out id *)a1;
- (void)replaceWithElement:(id)a0;
- (BOOL)shouldBeArchived;
- (void)updateWithTextView:(id)a0 layout:(BOOL)a1 display:(BOOL)a2;

@end
