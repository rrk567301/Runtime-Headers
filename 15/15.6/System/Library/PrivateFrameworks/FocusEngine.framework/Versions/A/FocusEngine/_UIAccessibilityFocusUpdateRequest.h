@interface _UIAccessibilityFocusUpdateRequest : _FEFocusUpdateRequest

@property (nonatomic) long long options;

- (char)requiresNextFocusedItem;
- (char)shouldPlayFocusSound;

@end
