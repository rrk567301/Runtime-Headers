@protocol AccessibilityInteractableTextFieldDelegate;

@interface AccessibilityInteractableTextField : NSTextField

@property (weak, nonatomic) id<AccessibilityInteractableTextFieldDelegate> accessibilityDelegate;

- (void).cxx_destruct;
- (char)accessibilityPerformPress;
- (id)accessibilityRole;

@end
