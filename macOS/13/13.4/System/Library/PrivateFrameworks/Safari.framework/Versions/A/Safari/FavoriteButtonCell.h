@class NSArray;

@interface FavoriteButtonCell : RolloverTextButtonCell {
    int _indicator;
    BOOL _shouldDrawDragged;
    BOOL _isTrackingMouseDown;
    NSArray *_accessibilityAttributes;
    NSArray *_accessibilityActions;
}

+ (id)squareImage;
+ (id)triangleImage;

- (void).cxx_destruct;
- (BOOL)showsBorderOnlyWhileMouseInside;
- (BOOL)_shouldDrawBezel;
- (BOOL)_shouldDrawDragged;
- (id)accessibilityChildren;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformShowMenu;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityChildren:(id)a0;
- (void)setAccessibilityRole:(id)a0;
- (void)setAccessibilityRoleDescription:(id)a0;
- (int)indicator;
- (void)setIndicator:(int)a0;
- (id)indicatorImage;
- (BOOL)isTrackingMouseDown;
- (void)setShouldDrawDragged:(BOOL)a0;
- (void)setTrackingMouseDown:(BOOL)a0;

@end
