@class NSArray;

@interface FavoriteButtonCell : RolloverTextButtonCell {
    int _indicator;
    char _shouldDrawDragged;
    char _isTrackingMouseDown;
    NSArray *_accessibilityAttributes;
    NSArray *_accessibilityActions;
}

@property (nonatomic) char hasLeadingEmoji;
@property (nonatomic) long long buttonStyle;

+ (id)squareImage;
+ (id)triangleImage;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (char)showsBorderOnlyWhileMouseInside;
- (char)_shouldDrawBezel;
- (char)_shouldDrawDragged;
- (id)accessibilityChildren;
- (char)accessibilityPerformPress;
- (char)accessibilityPerformShowMenu;
- (id)accessibilityRole;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (char)isAccessibilityElement;
- (void)setAccessibilityChildren:(id)a0;
- (void)setAccessibilityRole:(id)a0;
- (void)setAccessibilityRoleDescription:(id)a0;
- (int)indicator;
- (void)setIndicator:(int)a0;
- (id)indicatorImage;
- (char)isTrackingMouseDown;
- (void)setShouldDrawDragged:(char)a0;
- (void)setTrackingMouseDown:(char)a0;

@end
