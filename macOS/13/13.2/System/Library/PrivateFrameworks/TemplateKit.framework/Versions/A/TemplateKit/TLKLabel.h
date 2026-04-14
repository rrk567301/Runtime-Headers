@class NSTextField, NSString, NSFont, NSTrackingArea, TLKFormattedText, TLKMultilineText, TLKRichText, NSAttributedString;

@interface TLKLabel : NSTextField

@property (retain, nonatomic) NSTextField *overlayLabelForNonColoredGlyphs;
@property (retain) NSFont *originalFont;
@property BOOL hasCustomTextColor;
@property BOOL attributedTextExplicitelySet;
@property BOOL attributedTextUpdateDisabled;
@property BOOL attributedTextUpdateSkipped;
@property unsigned long long adjustedProminence;
@property BOOL disableVibrancy;
@property (nonatomic) BOOL inHoverState;
@property (retain) NSTrackingArea *hoverTrackingArea;
@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (retain, nonatomic) TLKRichText *richText;
@property (retain, nonatomic) TLKFormattedText *formattedText;
@property (nonatomic) BOOL supportsColorGlyphs;
@property (nonatomic) long long numberOfLines;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL middleTruncation;
@property (nonatomic) BOOL highlightsOnHover;

+ (id)secondaryLabel;
+ (id)tertiaryLabel;
+ (id)primaryLabel;

- (id)init;
- (void).cxx_destruct;
- (void)setAlignment:(long long)a0;
- (void)layout;
- (void)setStringValue:(id)a0;
- (void)setLineBreakMode:(unsigned long long)a0;
- (BOOL)allowsVibrancy;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)performBatchUpdates:(id /* block */)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setFont:(id)a0;
- (void)setAttributedStringValue:(id)a0;
- (void)updateTrackingAreas;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTextColor:(id)a0;
- (void)tlk_updateForAppearance:(id)a0;
- (id)initWithProminence:(unsigned long long)a0;
- (void)setFont:(id)a0 keepOriginal:(BOOL)a1;
- (void)loadInlineImages;
- (void)updateAdjustedProminence;
- (BOOL)hasEmphasizedFormattingInRichText;
- (void)updateAttributedText;
- (void)updateWithAttributedString:(id)a0;
- (void)updateWithString:(id)a0;
- (void)updateLineBreakMode;
- (void)adjustFontSizeIfNecessaryForSize:(struct CGSize { double x0; double x1; })a0;
- (id)fontThatFitsCurrentTextWidthForOriginalFont:(id)a0 forWidth:(double)a1;
- (id)fontForSize:(double)a0;

@end
