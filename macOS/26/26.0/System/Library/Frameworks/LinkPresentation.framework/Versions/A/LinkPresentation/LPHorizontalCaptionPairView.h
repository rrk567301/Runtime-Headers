@class LPCaptionButtonPresentationProperties, NSRegularExpression, NSString, LPSubtitleButtonView, NSLayoutConstraint, NSFont, LPTextView;

@interface LPHorizontalCaptionPairView : LPComponentView <LPTextStyleable, LPContentInsettable, LPSubtitleButtonContainer> {
    LPCaptionButtonPresentationProperties *_buttonProperties;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    long long _balancingMode;
    LPSubtitleButtonView *_button;
    NSLayoutConstraint *_buttonWidthConstraint;
    NSLayoutConstraint *_buttonHeightConstraint;
}

@property (nonatomic) long long overrideMaximumNumberOfLines;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression;
@property (retain, nonatomic) LPTextView *leftView;
@property (retain, nonatomic) LPTextView *rightView;
@property (readonly, nonatomic) NSFont *preferredFont;
@property (readonly, nonatomic) NSFont *fallbackFont;
@property (retain, nonatomic) NSFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHost:(id)a0;
- (void)setContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (double)ascender;
- (double)descender;
- (id)subtitleButton;
- (BOOL)textIsTruncated;
- (double)lastLineDescent;
- (struct CGSize { double x0; double x1; })_layoutCaptionPairForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (long long)computedNumberOfLines;
- (double)firstLineLeading;
- (id)initWithHost:(id)a0 leadingText:(id)a1 leadingStyle:(id)a2 trailingText:(id)a3 trailingStyle:(id)a4 button:(id)a5 balancingMode:(long long)a6;
- (void)layoutComponentView;

@end
