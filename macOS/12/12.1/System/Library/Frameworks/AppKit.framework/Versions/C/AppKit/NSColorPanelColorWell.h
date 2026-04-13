@class NSAppearance;

@interface NSColorPanelColorWell : NSColorWell {
    BOOL _disabledAsColorDestination;
    BOOL _actsLikeButton;
    unsigned long long _controlSize;
    NSAppearance *_appearanceForRenderingColor;
}

@property (retain) NSAppearance *appearanceForRenderingColor;

- (void)dealloc;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)a0;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)performClick:(id)a0;
- (void)setColor:(id)a0;
- (void)moveRight:(id)a0;
- (void)moveLeft:(id)a0;
- (void)registerForDraggedTypes:(id)a0;
- (BOOL)_drawWithStrokeColor:(id)a0;
- (void)setAcceptsColorDrops:(BOOL)a0;
- (void)setActsLikeButton:(BOOL)a0;
- (BOOL)drawColor;
- (void)_drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
