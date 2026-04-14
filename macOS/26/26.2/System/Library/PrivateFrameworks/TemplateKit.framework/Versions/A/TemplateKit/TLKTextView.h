@class TLKMultilineText;

@interface TLKTextView : NSTextView

@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (nonatomic) BOOL automaticUrlification;

- (void)setText:(id)a0;
- (void)viewDidMoveToWindow;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)canBecomeKeyView;
- (void).cxx_destruct;
- (void)loadInlineImages;
- (void)tlk_updateForAppearance:(id)a0;
- (BOOL)allowsVibrancy;
- (id)init;
- (void)viewDidChangeEffectiveAppearance;
- (struct CGSize { double x0; double x1; })calculateLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (void)updateAttributedString;
- (void)urlify;

@end
