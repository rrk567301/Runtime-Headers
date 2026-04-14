@protocol SiriUIAccessibilityStashDelegate;

@interface SiriUICardView : NSView

@property (weak, nonatomic) id<SiriUIAccessibilityStashDelegate> accessibilityStashDelegate;

- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (id)accessibilityRoleDescription;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityIdentifier;
- (id)accessibilityLinkedUIElements;
- (id)accessibilityDescription;

@end
