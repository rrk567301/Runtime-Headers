@interface CPRotatedRegion : CPRegion {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedBounds;
    BOOL dirtyNormalizedBounds;
}

- (struct CGPoint { double x0; double x1; })anchor;
- (double)top;
- (double)center;
- (double)bottom;
- (double)right;
- (double)left;
- (id)init;
- (void)fitBoundsToChildren;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedBounds;
- (void)resizeWith:(id)a0;

@end
