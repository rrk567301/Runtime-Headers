@interface ModalDialogDimmingView : DimmingView

@property (copy, nonatomic) id /* block */ accessibilityFrameProviderCallback;

+ (double)animationDuration;
+ (id)undimmedBackgroundColor;
+ (id)dimmedBackgroundColor;

- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)isAccessibilityElement;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityPerformPress;

@end
