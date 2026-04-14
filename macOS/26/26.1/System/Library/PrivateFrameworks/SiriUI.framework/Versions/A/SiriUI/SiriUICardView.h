@protocol SiriUIAccessibilityStashDelegate;

@interface SiriUICardView : NSView

@property (weak, nonatomic) id<SiriUIAccessibilityStashDelegate> accessibilityStashDelegate;

- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (id)accessibilityDescription;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (void)updateLayer;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityLinkedUIElements;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleDescription;
- (BOOL)wantsUpdateLayer;

@end
