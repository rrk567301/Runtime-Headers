@interface CPColumn : CPRotatedRegion {
    char hasCentredParagraph;
    char hasColumnBreak;
    double maxLeftPad;
    double maxRightPad;
    double maxRight;
    double minLeft;
}

@property char complete;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (int)inOrder;
- (double)leftPad;
- (double)selectionBottom;
- (void)setMaxRightPad:(double)a0;
- (void)accept:(id)a0;
- (double)bottomBaseline;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })columnBounds;
- (char)hasCentredParagraph;
- (char)isBoxRegion;
- (char)isGraphicalRegion;
- (char)isImageRegion;
- (char)isRowRegion;
- (char)isShapeRegion;
- (double)maxLeftPad;
- (double)maxRightPad;
- (int)outOrder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paddedBounds;
- (double)rightPad;
- (void)setHasCentredParagraph:(char)a0;
- (void)setHasColumnBreak:(char)a0;
- (void)setIsImageRegion:(char)a0;
- (void)setMaxLeftPad:(double)a0;

@end
