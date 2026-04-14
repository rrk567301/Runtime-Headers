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
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformShowMenu;
- (void)setAccessibilityRole:(id)a0;
- (void)setAccessibilityRoleDescription:(id)a0;
- (void)setAccessibilityChildren:(id)a0;
- (BOOL)showsBorderOnlyWhileMouseInside;
- (BOOL)_shouldDrawBezel;
- (BOOL)_shouldDrawDragged;
- (int)indicator;
- (void)setIndicator:(int)a0;
- (id)indicatorImage;
- (void)setShouldDrawDragged:(BOOL)a0;
- (void)setTrackingMouseDown:(BOOL)a0;
- (BOOL)isTrackingMouseDown;

@end
