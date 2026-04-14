@class NSTextField, NSRegularExpression, NSAttributedString, LPTextViewStyle;

@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable> {
    NSTextField *_textView;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPTextViewStyle *_style;
    NSAttributedString *_attributedString;
    double _ascender;
    double _descender;
}

@property (readonly, retain, nonatomic) NSAttributedString *attributedString;
@property (readonly, retain, nonatomic) LPTextViewStyle *style;
@property (nonatomic) long long overrideMaximumNumberOfLines;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression;

+ (id)attributedString:(id)a0 resolvedAgainstStyle:(id)a1 withEmphasizedTextExpression:(id)a2 tintColor:(id)a3 lineBreakMode:(unsigned long long)a4 usesVibrancy:(BOOL)a5 forLTR:(BOOL)a6 withFont:(id)a7;
+ (id)attributedStringHidingNonColoredRanges:(id)a0;

- (void).cxx_destruct;
- (double)descender;
- (double)ascender;
- (void)setContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (void)tintColorDidChange;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsets;
- (void)layoutComponentView;
- (id)initWithHost:(id)a0 text:(id)a1 style:(id)a2;
- (double)firstLineLeading;
- (double)lastLineDescent;
- (long long)computedNumberOfLines;
- (id)effectiveAttributedString;
- (void)_createTextViewWithAttributedString:(id)a0;
- (long long)effectiveMaximumNumberOfLines;
- (void)_buildSubviewsIfNeeded;
- (void)applyAttributedString:(id)a0;

@end
