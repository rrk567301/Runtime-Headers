@class NSArray;

@interface FavoriteButtonCell : RolloverTextButtonCell {
    int _indicator;
    BOOL _shouldDrawDragged;
    BOOL _isTrackingMouseDown;
    NSArray *_accessibilityAttributes;
    NSArray *_accessibilityActions;
}

@property (nonatomic) BOOL hasLeadingEmoji;
@property (nonatomic) long long buttonStyle;

+ (id)squareImage;
+ (id)triangleImage;

- (int)indicator;
- (void)setIndicator:(int)a0;
- (void)setTitle:(id)a0;
- (id)indicatorImage;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)showsBorderOnlyWhileMouseInside;
- (BOOL)_shouldDrawBezel;
- (BOOL)_shouldDrawDragged;
- (id)accessibilityChildren;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformShowMenu;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setAccessibilityChildren:(id)a0;
- (void)setAccessibilityRole:(id)a0;
- (void)setAccessibilityRoleDescription:(id)a0;
- (BOOL)isTrackingMouseDown;
- (void)setShouldDrawDragged:(BOOL)a0;
- (void)setTrackingMouseDown:(BOOL)a0;

@end
