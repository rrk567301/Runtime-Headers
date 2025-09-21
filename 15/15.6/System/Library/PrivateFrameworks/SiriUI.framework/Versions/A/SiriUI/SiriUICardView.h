@protocol SiriUIAccessibilityStashDelegate;

@interface SiriUICardView : NSView

@property (weak, nonatomic) id<SiriUIAccessibilityStashDelegate> accessibilityStashDelegate;

- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityDescription;
- (id)accessibilityIdentifier;
- (id)accessibilityLinkedUIElements;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (char)isAccessibilityElement;
- (void)updateLayer;
- (char)wantsUpdateLayer;

@end
