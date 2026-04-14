@class NSString;

@interface CalUIAXTextField : NSTextField

@property BOOL accessibiltyIgnoredForNodeAndChildren;
@property BOOL accessibiltyIgnoredForNode;
@property (retain) NSString *axRoleDescription;

- (id)accessibilityRole;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRoleDescription;

@end
