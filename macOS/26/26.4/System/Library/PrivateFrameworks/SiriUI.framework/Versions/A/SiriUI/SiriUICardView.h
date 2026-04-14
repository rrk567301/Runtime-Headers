@protocol SiriUIAccessibilityStashDelegate;

@interface SiriUICardView : NSView

@property (weak, nonatomic) id<SiriUIAccessibilityStashDelegate> accessibilityStashDelegate;

- (void)updateLayer;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (id)accessibilityDescription;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityLinkedUIElements;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleDescription;
- (BOOL)wantsUpdateLayer;

@end
