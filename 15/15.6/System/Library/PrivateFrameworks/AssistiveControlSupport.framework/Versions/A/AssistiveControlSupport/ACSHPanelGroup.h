@interface ACSHPanelGroup : ACSHPanelElement

- (struct CGSize { double x0; double x1; })minimumSize;
- (id)spokenDescription;
- (char)canBeBrokenApart;
- (char)containsNonNavigablePanelElementsOnly;
- (id)dictionaryForSaving;
- (void)removeChildElement:(id)a0;
- (void)resizeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resizeType:(long long)a1;
- (void)setRectBeingManipulated:(char)a0;

@end
