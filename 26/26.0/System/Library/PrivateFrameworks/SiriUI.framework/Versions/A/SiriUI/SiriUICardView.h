@protocol SiriUIAccessibilityStashDelegate;

@interface SiriUICardView : NSView

@property (weak, nonatomic) id<SiriUIAccessibilityStashDelegate> accessibilityStashDelegate;

- (void)updateLayer;
- (id)accessibilityIdentifier;
- (id)accessibilityRole;
- (id)accessibilityDescription;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityLinkedUIElements;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleDescription;
- (BOOL)wantsUpdateLayer;

@end
