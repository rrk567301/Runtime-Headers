@interface EDOneCellAnchor : EDAnchor {
    struct EDCellAnchorMarker { int columnIndex; float columnAdjustment; int rowIndex; float rowAdjustment; } mFrom;
    struct CGSize { double width; double height; } mSize;
    char mIsRelative;
}

- (id).cxx_construct;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })size;
- (struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })from;
- (void)setFrom:(struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })a0;
- (char)isRelative;
- (void)setRelative:(char)a0;

@end
