@interface CPRegion : CPChunk {
    BOOL isTextRegion;
    BOOL isImageRegion;
    BOOL isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)order;
- (void)setOrder:(int)a0;
- (id)link;
- (void)setLink:(id)a0;
- (void)accept:(id)a0;
- (BOOL)isIndivisible;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isRowRegion;
- (void)setIsImageRegion:(BOOL)a0;
- (BOOL)isImageRegion;
- (BOOL)isShapeRegion;
- (BOOL)isParagraphRegion;
- (BOOL)isListItemRegion;
- (BOOL)isTextRegion;
- (void)setIsTextRegion:(BOOL)a0;
- (BOOL)isTableCellRegion;
- (BOOL)isBodyZone;
- (BOOL)isCompoundShape;
- (void)setIsCompoundShape:(BOOL)a0;
- (BOOL)isZone;
- (BOOL)isRotated;
- (id)nextRegion;
- (void)setNextRegion:(id)a0;

@end
