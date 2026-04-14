@interface CPColumn : CPRotatedRegion {
    BOOL hasCentredParagraph;
    BOOL hasColumnBreak;
    double maxLeftPad;
    double maxRightPad;
    double maxRight;
    double minLeft;
}

@property BOOL complete;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)accept:(id)a0;
- (void)setHasColumnBreak:(BOOL)a0;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isRowRegion;
- (void)setIsImageRegion:(BOOL)a0;
- (BOOL)isImageRegion;
- (BOOL)isShapeRegion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })columnBounds;
- (double)bottomBaseline;
- (BOOL)hasCentredParagraph;
- (void)setHasCentredParagraph:(BOOL)a0;
- (double)leftPad;
- (double)rightPad;
- (double)maxLeftPad;
- (void)setMaxLeftPad:(double)a0;
- (double)maxRightPad;
- (void)setMaxRightPad:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paddedBounds;
- (double)selectionBottom;
- (int)outOrder;
- (int)inOrder;

@end
