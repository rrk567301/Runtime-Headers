@interface ABCardViewNoteProperty : ABCardViewSingleValueProperty

- (BOOL)canRemove;
- (BOOL)allowsCustomLabels;
- (BOOL)shouldUseAccountNameInLabel;
- (id)defaultLabelWithAccountName:(id)a0;
- (BOOL)needsCardViewBorderDrawing;

@end
