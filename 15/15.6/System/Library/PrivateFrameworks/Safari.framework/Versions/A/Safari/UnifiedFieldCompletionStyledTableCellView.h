@interface UnifiedFieldCompletionStyledTableCellView : TableCellViewWithCustomHighlightedViews

+ (id)_descriptionLeadInTextAttributes;
+ (id)_descriptionLeadInTextAttributesWithWrapping:(char)a0;
+ (id)_descriptionSelectedTextColor;
+ (id)_descriptionTextAttributes;
+ (id)_descriptionTextAttributesWithStyle:(long long)a0;
+ (id)_descriptionTextAttributesWithWrapping:(char)a0;
+ (double)_descriptionTextLineHeight;
+ (id)_footnoteTextAttributes;
+ (id)_titleSelectedTextColor;
+ (id)_titleTextAttributes;
+ (id)_titleTextAttributesWithLineBreakMode:(unsigned long long)a0 isSelected:(char)a1 hasRangesToHighlight:(char)a2;
+ (id)_titleTextAttributesWithWrapping:(char)a0;
+ (double)_titleTextLineHeight;
+ (id)headerTextAttributes;

- (double)_preferredMaxLayoutWidthForTextField:(id)a0;
- (void)_setAttributedStringValue:(id)a0 highlightedAttributedStringValue:(id)a1 ofLabel:(id)a2;
- (void)_setAttributedStringValue:(id)a0 highlightedTextColor:(id)a1 ofLabel:(id)a2;
- (void)_setAttributedStringValue:(id)a0 ofDescriptionLabel:(id)a1;
- (void)_setAttributedStringValue:(id)a0 ofTitleLabel:(id)a1;
- (void)_setImage:(id)a0 ofGlyphImageView:(id)a1;

@end
