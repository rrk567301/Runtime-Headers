@interface ABDistributionKeyValueCell : ABPeoplePickerPropertyCell

+ (double)labelFontSize;

- (id)labelFont;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (double)heightOfSubrowWithCountOfRows:(long long)a0 inTableView:(id)a1;
- (id)selectedLabelFont;
- (BOOL)shouldUseStrongLTRCharacters;

@end
