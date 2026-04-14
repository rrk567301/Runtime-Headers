@class NSString;
@protocol QLAccessibilityUIElementDelegate;

@interface QLAccessibilityUIElement : NSAccessibilityElement {
    NSString *identifier;
}

@property (weak) id<QLAccessibilityUIElementDelegate> delegate;

+ (id)elementWithIdentifier:(id)a0 delegate:(id)a1;

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInParentSpace;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;

@end
