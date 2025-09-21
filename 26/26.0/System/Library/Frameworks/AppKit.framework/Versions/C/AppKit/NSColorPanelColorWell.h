@class NSAppearance;

@interface NSColorPanelColorWell : NSColorWell {
    BOOL _disabledAsColorDestination;
    BOOL _actsLikeButton;
}

@property (retain) NSAppearance *appearanceForRenderingColor;

+ (Class)_visualProviderClass;

- (void)mouseDown:(id)a0;
- (void)setControlSize:(unsigned long long)a0;
- (void)setColor:(id)a0;
- (id)__visualProvider;
- (BOOL)acceptsFirstResponder;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)performClick:(id)a0;
- (void)registerForDraggedTypes:(id)a0;
- (void)setAcceptsColorDrops:(BOOL)a0;
- (void)setActsLikeButton:(BOOL)a0;

@end
