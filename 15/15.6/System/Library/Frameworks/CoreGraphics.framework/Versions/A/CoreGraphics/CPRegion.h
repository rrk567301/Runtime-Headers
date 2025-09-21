@interface CPRegion : CPChunk {
    char isTextRegion;
    char isImageRegion;
    char isCompoundShape;
    CPRegion *nextRegion;
    int order;
    id link;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)order;
- (void)accept:(id)a0;
- (char)isCompoundShape;
- (char)isBodyZone;
- (char)isBoxRegion;
- (char)isGraphicalRegion;
- (char)isImageRegion;
- (char)isIndivisible;
- (char)isListItemRegion;
- (char)isParagraphRegion;
- (char)isRotated;
- (char)isRowRegion;
- (char)isShapeRegion;
- (char)isTableCellRegion;
- (char)isTextRegion;
- (char)isZone;
- (id)link;
- (id)nextRegion;
- (void)setIsCompoundShape:(char)a0;
- (void)setIsImageRegion:(char)a0;
- (void)setIsTextRegion:(char)a0;
- (void)setLink:(id)a0;
- (void)setNextRegion:(id)a0;
- (void)setOrder:(int)a0;

@end
