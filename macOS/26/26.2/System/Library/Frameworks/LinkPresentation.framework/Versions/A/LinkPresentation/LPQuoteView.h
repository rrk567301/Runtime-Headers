@class NSFont, NSRegularExpression, LPTextView, NSImageView, LPQuotedTextViewStyle, NSAttributedString, NSTextView;

@interface LPQuoteView : LPComponentView <LPTextStyleable, LPContentInsettable> {
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
@property (retain, nonatomic) NSTextView *textView;
@property (readonly, nonatomic) NSFont *preferredFont;
@property (readonly, nonatomic) NSFont *fallbackFont;
@property (retain, nonatomic) NSFont *font;

- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsets;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)tintColorDidChange;
- (void)setContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithHost:(id)a0;
- (double)ascender;
- (double)descender;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;
- (id)_createTextView;
- (BOOL)textIsTruncated;
- (double)lastLineDescent;
- (void)_buildSubviewsIfNeeded;
- (void)applyAttributedString:(id)a0;
- (long long)computedNumberOfLines;
- (long long)computedNumberOfLinesWithFont:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)effectiveAttributedString;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsetsWithoutQuoteIndicator;
- (long long)effectiveMaximumNumberOfLines;
- (double)firstLineLeading;
- (id)initWithHost:(id)a0 text:(id)a1 style:(id)a2;
- (void)layoutComponentView;
- (void)updateEffectiveFontForSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateExclusionRects;

@end
