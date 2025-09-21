@interface TLKFontUtilities : NSObject

+ (id)preferredFontForTextStyle:(id)a0;
+ (id)boldBodyFont;
+ (id)captionFont;
+ (id)subheadBoldFont;
+ (id)attributedStringForFormattedText:(id)a0 appearance:(id)a1 prominence:(unsigned long long)a2 alignment:(long long)a3 font:(id)a4 isButton:(char)a5 scale:(double)a6 isDark:(char)a7;
+ (id)attributedStringForRichText:(id)a0 appearance:(id)a1 prominence:(unsigned long long)a2 alignment:(long long)a3 coloredRanges:(id)a4 nonColoredRanges:(id)a5 rangesForNonTemplateImageAttachments:(id)a6 rangesForTemplateImageAttachments:(id)a7 font:(id)a8 isButton:(char)a9 scale:(double)a10 isDark:(char)a11;
+ (id)attributedStringForRichText:(id)a0 appearance:(id)a1 prominence:(unsigned long long)a2 alignment:(long long)a3 font:(id)a4 isButton:(char)a5 scale:(double)a6 isDark:(char)a7;
+ (void)cacheInlineImagesForRichText:(id)a0 inView:(id)a1 updateHandler:(id /* block */)a2;
+ (id)cachedFontForKey:(id)a0 creatorBlock:(id /* block */)a1;
+ (id)cachedFontForMacTextStyle:(id)a0;
+ (id)cachedFontForTextStyle:(id)a0;
+ (id)cachedFontForTextStyle:(id)a0 isBold:(char)a1 isMacStyle:(char)a2;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(char)a1 fontWeight:(double)a2;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(char)a1 fontWeight:(double)a2 isMacStyle:(char)a3;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(char)a1 isBold:(char)a2;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(char)a1 isBold:(char)a2 isMacStyle:(char)a3;
+ (id)cachedFontForTextStyle:(id)a0 isShort:(char)a1 isBold:(char)a2 useCustomWeight:(char)a3 customFontWeight:(double)a4 isMacStyle:(char)a5;
+ (id)calloutFont;
+ (id)clearTextAttachmentForTextAttachment:(id)a0;
+ (id)footnoteFont;
+ (char)formattedTextItemIsColoredImage:(id)a0;
+ (id)preferredFontDescriptorWithTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1 isMacStyle:(char)a2;
+ (id)preferredFontForTextStyle:(id)a0 maximumContentSizeCategory:(id)a1;
+ (id)preferredFontWithTextStyle:(id)a0 isShort:(char)a1 isBold:(char)a2;
+ (id)preferredFontWithTextStyle:(id)a0 isShort:(char)a1 isBold:(char)a2 useCustomWeight:(char)a3 customFontWeight:(double)a4 isMonoSpaced:(char)a5 isMacStyle:(char)a6;
+ (id)preferredMonospacedFontForTextStyle:(id)a0;
+ (id)shortBodyFont;
+ (id)shortFootnoteFont;
+ (id)shortSubheadBoldFont;
+ (id)shortSubheadFont;
+ (id)subheadFont;
+ (id)textAttachmentForImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 cornerRoundingStyle:(unsigned long long)a2 appearance:(id)a3;
+ (id)thinFontOfSize:(double)a0 grade:(unsigned long long)a1;
+ (id)updateAttributedStringUnderlineStyle:(id)a0 isUnderlineVisible:(char)a1;

@end
