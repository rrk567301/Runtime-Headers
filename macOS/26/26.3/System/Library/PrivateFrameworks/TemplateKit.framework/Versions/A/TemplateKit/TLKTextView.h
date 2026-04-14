@class TLKMultilineText;

@interface TLKTextView : NSTextView

@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (nonatomic) BOOL automaticUrlification;

- (void)viewDidChangeEffectiveAppearance;
- (id)init;
- (BOOL)canBecomeKeyView;
- (void)tlk_updateForAppearance:(id)a0;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (void)loadInlineImages;
- (void)setText:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)allowsVibrancy;
- (struct CGSize { double x0; double x1; })calculateLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (void)updateAttributedString;
- (void)urlify;

@end
