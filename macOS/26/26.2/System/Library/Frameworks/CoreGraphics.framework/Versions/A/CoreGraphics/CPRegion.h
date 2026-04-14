@interface CPRegion : CPChunk {
    BOOL isTextRegion;
    BOOL isImageRegion;
    BOOL isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}

- (id)link;
- (int)order;
- (void)setOrder:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLink:(id)a0;
- (void)dealloc;
- (BOOL)isCompoundShape;
- (void)accept:(id)a0;
- (BOOL)isBodyZone;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isImageRegion;
- (BOOL)isIndivisible;
- (BOOL)isListItemRegion;
- (BOOL)isParagraphRegion;
- (BOOL)isRotated;
- (BOOL)isRowRegion;
- (BOOL)isShapeRegion;
- (BOOL)isTableCellRegion;
- (BOOL)isTextRegion;
- (BOOL)isZone;
- (id)nextRegion;
- (void)setIsCompoundShape:(BOOL)a0;
- (void)setIsImageRegion:(BOOL)a0;
- (void)setIsTextRegion:(BOOL)a0;
- (void)setNextRegion:(id)a0;

@end
