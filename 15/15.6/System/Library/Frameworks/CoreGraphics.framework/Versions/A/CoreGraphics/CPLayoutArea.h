@interface CPLayoutArea : CPRotatedRegion {
    char isFirstLayout;
    char hasRotatedCharacters;
}

- (id)description;
- (id)init;
- (id)properties;
- (double)selectionBottom;
- (void)accept:(id)a0;
- (void)addColumnBreaks;
- (BOOL)hasRotatedCharacters;
- (char)isBoxRegion;
- (char)isFirstLayout;
- (char)isGraphicalRegion;
- (char)isImageRegion;
- (char)isRowRegion;
- (char)isShapeRegion;
- (char)isSimilarTo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutAreaBounds;
- (void)setHasRotatedCharacters:(char)a0;
- (void)setIsFirstLayout:(char)a0;
- (void)setIsImageRegion:(char)a0;

@end
