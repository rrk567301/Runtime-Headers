@class TLKMultilineText, NSTextField, NSString, NSAttributedString, TLKRichText, NSFont, TLKFormattedText;

@interface TLKLabel : NSTextField

@property (retain, nonatomic) NSTextField *overlayLabelForNonColoredGlyphs;
@property (retain, nonatomic) NSTextField *overlayLabelForColoredGlyphs;
@property (retain) NSFont *originalFont;
@property BOOL hasCustomTextColor;
@property BOOL attributedTextExplicitelySet;
@property BOOL attributedTextUpdateDisabled;
@property BOOL attributedTextUpdateSkipped;
@property unsigned long long adjustedProminence;
@property struct NSEdgeInsets { double top; double left; double bottom; double right; } unadjustedCustemAlignmentRectInsets;
@property BOOL disableVibrancy;
@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (retain, nonatomic) TLKRichText *richText;
@property (retain, nonatomic) TLKFormattedText *formattedText;
@property (nonatomic) BOOL supportsColorGlyphs;
@property (nonatomic) BOOL autoHideIfNoContent;
@property (nonatomic) BOOL useButtonColoring;
@property (nonatomic) long long numberOfLines;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL middleTruncation;
@property (nonatomic) BOOL shouldUnderlineText;
@property (nonatomic) BOOL supportsColoredTokenAttachments;

+ (id)tertiaryLabel;
+ (id)primaryLabel;
+ (id)secondaryLabel;
+ (BOOL)stringStartsWithQuote:(id)a0;

- (void)setFont:(id)a0 keepOriginal:(BOOL)a1;
- (void)setCustomAlignmentRectInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)allowsVibrancy;
- (void)setAlignment:(long long)a0;
- (void)setLineBreakMode:(unsigned long long)a0;
- (void)setStringValue:(id)a0;
- (void)setAttributedStringValue:(id)a0;
- (void)loadInlineImages;
- (void)layout;
- (void)setFont:(id)a0;
- (void)updateLineBreakMode;
- (void)adjustFontSizeIfNecessaryForSize:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void)tlk_updateForAppearance:(id)a0;
- (id)fontForSize:(double)a0;
- (void)performBatchUpdates:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTextColor:(id)a0;
- (void)viewDidMoveToWindow;
- (void)updateWithString:(id)a0;
- (id)fontThatFitsCurrentTextWidthForOriginalFont:(id)a0 forWidth:(double)a1;
- (void)updateAdjustedProminence;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateWithAttributedString:(id)a0;
- (void).cxx_destruct;
- (id)initWithProminence:(unsigned long long)a0;
- (void)setUsesSingleLineMode:(BOOL)a0;
- (void)updateAttributedText;
- (BOOL)hasEmphasizedFormattingInRichText;

@end
