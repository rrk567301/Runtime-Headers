@interface RemindersUICore.TTRMHashtagButton : NSControl {
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ isExcluded;
    void /* unknown type, empty encoding */ isContextMenuTarget;
    void /* unknown type, empty encoding */ titleFont;
    void /* unknown type, empty encoding */ accessibilityDelegate;
    void /* unknown type, empty encoding */ titleBox;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ selectionBorderView;
    void /* unknown type, empty encoding */ needsUpdateAppearance;
    void /* unknown type, empty encoding */ isKeyAndActiveSnapshot;
    void /* unknown type, empty encoding */ selectionBorderViewInset;
    void /* unknown type, empty encoding */ keyAndActiveSubscription;
    void /* unknown type, empty encoding */ increaseContrastSubscription;
}

@property (nonatomic) BOOL highlighted;

- (BOOL)isHighlighted;
- (id)accessibilityLabel;
- (void)layout;
- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (id)accessibilityRole;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityUserInputLabels;
- (void)mouseDown:(id)a0;
- (id)accessibilityHelp;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilitySelected;

@end
