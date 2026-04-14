@class NSString, IKTransitionAnimation;

@interface IKSSPDFView : PDFView <NSAnimationDelegate> {
    IKTransitionAnimation *_animation;
    double _autoZoomFactor;
    double _actualSizeZoomFactor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)mouseMoved:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)setDocument:(id)a0;
- (void)swipeWithEvent:(id)a0;
- (BOOL)isAtActualSize;
- (void)hideContent;
- (void)toFullScreen:(id)a0;
- (void)toActualSize:(id)a0;
- (void)addTooltipsForVisiblePages;
- (void)switchToFullScreen:(double)a0;
- (void)switchToActualSize:(double)a0;

@end
