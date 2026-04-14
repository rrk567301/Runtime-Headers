@class CPParagraphListItem;

@interface CPParagraph : CPRegion {
    BOOL noIndentation;
    BOOL below;
    unsigned long long alignment;
    BOOL hasDropCap;
    id flowProperties;
    double preformatWidth;
}

@property (retain, nonatomic) CPParagraphListItem *listItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)setAlignment:(unsigned long long)a0;
- (unsigned long long)index;
- (unsigned long long)alignment;
- (void)accept:(id)a0;
- (double)selectionBottom;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isRowRegion;
- (void)setIsImageRegion:(BOOL)a0;
- (BOOL)isImageRegion;
- (BOOL)isShapeRegion;
- (id)flowProperties;
- (void)setFlowProperties:(id)a0;
- (BOOL)isParagraphRegion;
- (BOOL)isListItemRegion;
- (BOOL)isTextRegion;
- (void)setIsTextRegion:(BOOL)a0;
- (void)setNoIndentation:(BOOL)a0;
- (BOOL)noIndentation;
- (BOOL)hasDropCap;
- (void)setHasDropCap:(BOOL)a0;
- (void)explode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reducedBounds;
- (void)setBelow:(BOOL)a0;
- (BOOL)below;
- (BOOL)isPreformattedWithUnitWidth:(double *)a0;

@end
