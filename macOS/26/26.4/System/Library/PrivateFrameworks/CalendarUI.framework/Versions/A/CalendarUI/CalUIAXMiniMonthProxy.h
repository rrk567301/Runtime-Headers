@class NSView;
@protocol CalUIAXMiniMonthProxyDelegate;

@interface CalUIAXMiniMonthProxy : NSAccessibilityElement

@property (weak) NSView<CalUIAXMiniMonthProxyDelegate> *delegate;

- (id)initWithDelegate:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityRole;
- (BOOL)isEqual:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isAccessibilityElement;
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
