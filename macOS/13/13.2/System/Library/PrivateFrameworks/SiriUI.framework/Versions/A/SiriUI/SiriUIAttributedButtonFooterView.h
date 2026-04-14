@class NSTextField, NSImageView, NSButton, NSStackView;

@interface SiriUIAttributedButtonFooterView : SiriUIReusableFooterView

@property (retain) NSButton *containingButton;
@property (retain) NSStackView *stackView;
@property (retain) NSTextField *label;
@property (retain) NSImageView *attributionIcon;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)declaredLayoutConstraints;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (id)accessibilityIdentifier;
- (BOOL)accessibilityPerformPress;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (void)setText:(id)a0;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)setAttributionImage:(id)a0;

@end
