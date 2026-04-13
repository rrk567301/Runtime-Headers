@class NSString;

@interface CCAccessibilityElement : NSAccessibilityElement

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain) NSString *label;
@property (retain) NSString *roleDescription;
@property (weak) CCAccessibilityElement *topLevelContainer;

- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityRoleDescription;

@end
