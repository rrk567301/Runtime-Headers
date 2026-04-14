@interface CPLayoutArea : CPRotatedRegion {
    BOOL isFirstLayout;
    BOOL hasRotatedCharacters;
}

- (id)description;
- (id)init;
- (id)properties;
- (void)accept:(id)a0;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isRowRegion;
- (void)setIsImageRegion:(BOOL)a0;
- (BOOL)isImageRegion;
- (BOOL)isShapeRegion;
- (double)selectionBottom;
- (BOOL)isSimilarTo:(id)a0;
- (BOOL)isFirstLayout;
- (void)setIsFirstLayout:(BOOL)a0;
- (void)addColumnBreaks;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutAreaBounds;
- (void)setHasRotatedCharacters:(BOOL)a0;
- (BOOL)hasRotatedCharacters;

@end
