@class CPParagraphListItem;

@interface CPParagraph : CPRotatedRegion {
    char noIndentation;
    char below;
    unsigned long long alignment;
    char hasDropCap;
    id flowProperties;
    double preformatWidth;
}

@property (retain, nonatomic) CPParagraphListItem *listItem;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setAlignment:(unsigned long long)a0;
- (unsigned long long)alignment;
- (unsigned long long)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)explode;
- (double)selectionBottom;
- (void)accept:(id)a0;
- (char)below;
- (id)flowProperties;
- (char)hasDropCap;
- (char)isBoxRegion;
- (char)isGraphicalRegion;
- (char)isImageRegion;
- (char)isListItemRegion;
- (char)isParagraphRegion;
- (char)isPreformattedWithUnitWidth:(double *)a0;
- (char)isRowRegion;
- (char)isShapeRegion;
- (char)isTextRegion;
- (char)noIndentation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reducedBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderedBounds;
- (void)setBelow:(char)a0;
- (void)setFlowProperties:(id)a0;
- (void)setHasDropCap:(char)a0;
- (void)setIsImageRegion:(char)a0;
- (void)setIsTextRegion:(char)a0;
- (void)setNoIndentation:(char)a0;

@end
