@class NSView;
@protocol CalUIAXMiniMonthProxyDelegate;

@interface CalUIAXMiniMonthProxy : NSAccessibilityElement

@property (weak) NSView<CalUIAXMiniMonthProxyDelegate> *delegate;

- (id)accessibilityLabel;
- (id)initWithDelegate:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)accessibilityChildren;
- (long long)accessibilityColumnCount;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityParent;
- (id)accessibilityRoleDescription;
- (long long)accessibilityRowCount;
- (id)accessibilitySelectedChildren;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityWindow;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityOrderedByRow;
- (id)axChildren;
- (id)axSelectedChildren;

@end
