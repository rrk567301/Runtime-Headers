@interface ABCardViewNoteProperty : ABCardViewSingleValueProperty

- (BOOL)canRemove;
- (BOOL)allowsCustomLabels;
- (id)defaultLabelWithAccountName:(id)a0;
- (BOOL)shouldUseAccountNameInLabel;
- (BOOL)needsCardViewBorderDrawing;

@end
