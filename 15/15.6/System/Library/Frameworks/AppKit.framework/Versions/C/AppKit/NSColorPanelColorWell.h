@class NSAppearance;

@interface NSColorPanelColorWell : NSColorWell {
    char _disabledAsColorDestination;
    char _actsLikeButton;
    unsigned long long _controlSize;
    NSAppearance *_appearanceForRenderingColor;
}

@property (retain) NSAppearance *appearanceForRenderingColor;

- (void)dealloc;
- (void)setColor:(id)a0;
- (void)setControlSize:(unsigned long long)a0;
- (void)_drawBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawInteriorBorderInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)_drawWithStrokeColor:(id)a0;
- (char)acceptsFirstResponder;
- (unsigned long long)controlSize;
- (char)drawColor;
- (void)mouseDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)performClick:(id)a0;
- (void)registerForDraggedTypes:(id)a0;
- (void)setAcceptsColorDrops:(char)a0;
- (void)setActsLikeButton:(char)a0;

@end
