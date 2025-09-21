@class NSString;

@interface CalUIAXTextField : NSTextField

@property char accessibiltyIgnoredForNodeAndChildren;
@property char accessibiltyIgnoredForNode;
@property (retain) NSString *axRoleDescription;

- (id)init;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (char)isAccessibilityElement;

@end
