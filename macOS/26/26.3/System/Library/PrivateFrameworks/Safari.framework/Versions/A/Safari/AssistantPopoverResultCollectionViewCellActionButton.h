@class NSTextField, CAGradientLayer, NSView, NSStackView, NSColor;

@interface AssistantPopoverResultCollectionViewCellActionButton : NSButton {
    NSTextField *_titleField;
    NSStackView *_contentStackView;
    NSView *_gradientOverlayView;
    CAGradientLayer *_gradient;
}

@property (retain, nonatomic) NSColor *fontColor;
@property (retain, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSColor *buttonColor;

+ (id)buttonWithTitle:(id)a0 symbol:(id)a1 target:(id)a2 action:(SEL)a3;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)_usesNonVibrantAppearance;
- (void)_setupButtonWithTitle:(id)a0 symbol:(id)a1;
- (void)updateGradientFrame;

@end
