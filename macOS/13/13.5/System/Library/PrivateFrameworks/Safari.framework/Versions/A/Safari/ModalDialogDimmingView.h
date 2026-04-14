@interface ModalDialogDimmingView : DimmingView

@property (copy, nonatomic) id /* block */ accessibilityFrameProviderCallback;

+ (double)animationDuration;
+ (id)dimmedBackgroundColor;
+ (id)undimmedBackgroundColor;

- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;

@end
