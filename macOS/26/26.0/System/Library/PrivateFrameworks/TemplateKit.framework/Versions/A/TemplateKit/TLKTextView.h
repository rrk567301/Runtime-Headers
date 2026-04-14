@class TLKMultilineText;

@interface TLKTextView : NSTextView

@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (nonatomic) BOOL automaticUrlification;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (void)loadInlineImages;
- (id)init;
- (void)setText:(id)a0;
- (void)tlk_updateForAppearance:(id)a0;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })calculateLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (void)updateAttributedString;
- (void)urlify;

@end
