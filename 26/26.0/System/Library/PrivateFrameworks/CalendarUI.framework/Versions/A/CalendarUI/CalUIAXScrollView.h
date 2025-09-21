@class NSString;

@interface CalUIAXScrollView : NSScrollView

@property BOOL accessibiltyIgnoredForNodeAndChildren;
@property BOOL accessibiltyIgnoredForNode;
@property (retain) NSString *axRoleDescription;

- (id)init;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRoleDescription;

@end
