@class NSString, NSAttributedString, NSFont;

@interface _MKUILabel : NSTextField <MKMultilineText> {
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
@property (nonatomic) double preferredMaxLayoutWidth;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;
+ (id)keyPathsForValuesAffectingAlignment;
+ (id)keyPathsForValuesAffectingText;
+ (id)keyPathsForValuesAffectingAttributedText;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)font;
- (void)setFont:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (double)baselineOffsetFromBottom;
- (void)viewWillMoveToWindow:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)infoCardThemeChanged;
- (void)_updateFontSize;

@end
