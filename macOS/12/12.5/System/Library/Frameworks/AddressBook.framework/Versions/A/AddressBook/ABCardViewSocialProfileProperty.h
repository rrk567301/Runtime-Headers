@interface ABCardViewSocialProfileProperty : ABCardViewProperty

- (BOOL)isValueEmpty:(id)a0;
- (id)emptyValueForMultiValue:(id)a0 label:(id)a1;
- (BOOL)allowsCustomLabels;
- (id)actionGlyphNames;
- (id /* block */)multiValueEntryToLabel;

@end
