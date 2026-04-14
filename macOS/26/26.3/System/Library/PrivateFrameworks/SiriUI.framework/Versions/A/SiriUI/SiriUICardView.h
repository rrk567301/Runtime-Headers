@protocol SiriUIAccessibilityStashDelegate;

@interface SiriUICardView : NSView

@property (weak, nonatomic) id<SiriUIAccessibilityStashDelegate> accessibilityStashDelegate;

- (id)accessibilityDescription;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (void)updateLayer;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityLinkedUIElements;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleDescription;
- (BOOL)wantsUpdateLayer;

@end
