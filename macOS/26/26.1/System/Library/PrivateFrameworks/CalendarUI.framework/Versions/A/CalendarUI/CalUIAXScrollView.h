@class NSString;

@interface CalUIAXScrollView : NSScrollView

@property BOOL accessibiltyIgnoredForNodeAndChildren;
@property BOOL accessibiltyIgnoredForNode;
@property (retain) NSString *axRoleDescription;

- (BOOL)isAccessibilityElement;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (id)init;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRoleDescription;

@end
