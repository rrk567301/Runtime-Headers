@class NSString, NSAttributedString, NSFont;

@interface _MKUILabel : NSTextField {
    double _cachedBaselineOffsetFromBottom;
    BOOL _haveCachedBaselineOffsetFromBottom;
    NSFont *_font;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL collapsesWhenEmpty;
@property (copy, nonatomic) id /* block */ _mapkit_themeColorProvider;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;

+ (Class)cellClass;
+ (id)keyPathsForValuesAffectingAlignment;
+ (id)keyPathsForValuesAffectingAttributedText;
+ (id)keyPathsForValuesAffectingText;

- (double)baselineOffsetFromBottom;
- (void)viewWillMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)font;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateFontSize;
- (void)infoCardThemeChanged;

@end
