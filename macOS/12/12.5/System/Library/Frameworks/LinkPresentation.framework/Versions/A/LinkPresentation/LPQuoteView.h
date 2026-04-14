@class LPTextView, NSRegularExpression, NSImageView, LPQuotedTextViewStyle, NSAttributedString, NSTextView;

@interface LPQuoteView : LPComponentView <LPTextStyleable, LPContentInsettable> {
    NSTextView *_textView;
    BOOL _didLimitNumberOfCharacters;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPQuotedTextViewStyle *_style;
    NSAttributedString *_attributedString;
    LPTextView *_characterLimitIndicatorView;
    NSImageView *_quoteIndicatorView;
    double _ascender;
    double _descender;
}

@property (readonly, retain, nonatomic) NSAttributedString *attributedString;
@property (readonly, retain, nonatomic) LPQuotedTextViewStyle *style;
@property (nonatomic) long long overrideMaximumNumberOfLines;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression;

- (void).cxx_destruct;
- (void)setFont:(id)a0;
- (double)descender;
- (double)ascender;
- (void)setContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)lastBaselineAnchor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)firstBaselineAnchor;
- (id)initWithHost:(id)a0;
- (void)tintColorDidChange;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsets;
- (void)layoutComponentView;
- (id)initWithHost:(id)a0 text:(id)a1 style:(id)a2;
- (double)firstLineLeading;
- (double)lastLineDescent;
- (long long)computedNumberOfLines;
- (id)effectiveAttributedString;
- (long long)effectiveMaximumNumberOfLines;
- (void)_buildSubviewsIfNeeded;
- (void)applyAttributedString:(id)a0;
- (id)_createTextView;
- (long long)computedNumberOfLinesWithFont:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsetsWithoutQuoteIndicator;
- (void)updateExclusionRects;
- (void)updateEffectiveFontForSize:(struct CGSize { double x0; double x1; })a0;

@end
