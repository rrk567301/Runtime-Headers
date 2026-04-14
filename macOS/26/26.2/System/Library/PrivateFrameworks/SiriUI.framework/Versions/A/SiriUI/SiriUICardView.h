@protocol SiriUIAccessibilityStashDelegate;

@interface SiriUICardView : NSView

@property (weak, nonatomic) id<SiriUIAccessibilityStashDelegate> accessibilityStashDelegate;

- (id)accessibilityIdentifier;
- (void)updateLayer;
- (id)accessibilityDescription;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityLinkedUIElements;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleDescription;
- (BOOL)wantsUpdateLayer;

@end
