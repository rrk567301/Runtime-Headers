@class NSString;

@interface CalUIAXScrollView : NSScrollView

@property BOOL accessibiltyIgnoredForNodeAndChildren;
@property BOOL accessibiltyIgnoredForNode;
@property (retain) NSString *axRoleDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;

@end
