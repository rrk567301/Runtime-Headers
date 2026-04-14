@interface UnifiedFieldCompletionStyledTableCellView : TableCellViewWithCustomHighlightedViews

+ (id)headerTextAttributes;
+ (double)_titleTextLineHeight;
+ (double)_descriptionTextLineHeight;
+ (id)_titleTextAttributes;
+ (id)_descriptionTextAttributes;
+ (id)_descriptionLeadInTextAttributes;
+ (id)_titleTextAttributesWithWrapping:(BOOL)a0;
+ (id)_titleTextAttributesWithLineBreakMode:(unsigned long long)a0 isSelected:(BOOL)a1;
+ (id)_descriptionTextAttributesWithWrapping:(BOOL)a0;
+ (id)_descriptionLeadInTextAttributesWithWrapping:(BOOL)a0;
+ (id)_descriptionTextAttributesWithStyle:(long long)a0;
+ (id)_footnoteTextAttributes;
+ (id)_titleSelectedTextColor;
+ (id)_descriptionSelectedTextColor;

- (void)_setAttributedStringValue:(id)a0 ofTitleLabel:(id)a1;
- (void)_setAttributedStringValue:(id)a0 ofDescriptionLabel:(id)a1;
- (void)_setImage:(id)a0 ofGlyphImageView:(id)a1;
- (void)_setAttributedStringValue:(id)a0 highlightedAttributedStringValue:(id)a1 ofLabel:(id)a2;
- (void)_setAttributedStringValue:(id)a0 highlightedTextColor:(id)a1 ofLabel:(id)a2;
- (double)_preferredMaxLayoutWidthForTextField:(id)a0;

@end
