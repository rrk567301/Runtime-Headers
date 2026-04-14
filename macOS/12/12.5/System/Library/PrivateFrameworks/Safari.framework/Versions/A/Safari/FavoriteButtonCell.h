@class NSArray;

@interface FavoriteButtonCell : RolloverTextButtonCell {
    int _indicator;
    BOOL _shouldDrawDragged;
    BOOL _isTrackingMouseDown;
    NSArray *_accessibilityAttributes;
    NSArray *_accessibilityActions;
}

+ (id)triangleImage;
+ (id)squareImage;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (BOOL)showsBorderOnlyWhileMouseInside;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformShowMenu;
- (void)setAccessibilityRole:(id)a0;
- (void)setAccessibilityRoleDescription:(id)a0;
- (void)setAccessibilityChildren:(id)a0;
- (BOOL)_shouldDrawBezel;
- (BOOL)_shouldDrawDragged;
- (BOOL)isTrackingMouseDown;
- (int)indicator;
- (void)setIndicator:(int)a0;
- (void)setShouldDrawDragged:(BOOL)a0;
- (void)setTrackingMouseDown:(BOOL)a0;
- (id)indicatorImage;

@end
