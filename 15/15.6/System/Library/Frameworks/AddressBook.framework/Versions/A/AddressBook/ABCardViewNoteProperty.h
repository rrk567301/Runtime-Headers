@interface ABCardViewNoteProperty : ABCardViewSingleValueProperty

- (char)canRemove;
- (char)allowsCustomLabels;
- (id)defaultLabelWithAccountName:(id)a0;
- (char)needsCardViewBorderDrawing;
- (char)shouldUseAccountNameInLabel;

@end
