@class NSTextField, NSImageView, NSButton, NSStackView;

@interface SiriUIAttributedButtonFooterView : SiriUIReusableFooterView

@property (retain) NSButton *containingButton;
@property (retain) NSStackView *stackView;
@property (retain) NSTextField *label;
@property (retain) NSImageView *attributionIcon;

+ (double)defaultHeight;

- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityIdentifier;
- (void)setText:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (BOOL)accessibilityPerformPress;
- (id)declaredLayoutConstraints;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)setAttributionImage:(id)a0;

@end
