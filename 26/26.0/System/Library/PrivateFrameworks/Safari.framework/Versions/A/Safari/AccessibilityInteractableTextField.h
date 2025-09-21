@protocol AccessibilityInteractableTextFieldDelegate;

@interface AccessibilityInteractableTextField : NSTextField

@property (weak, nonatomic) id<AccessibilityInteractableTextFieldDelegate> accessibilityDelegate;

- (id)accessibilityRole;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;

@end
