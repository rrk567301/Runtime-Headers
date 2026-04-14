@interface FI_TGridLayoutController : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _anchoredCellFrame;
}

@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } anchoredCellFrame;

- (id)delegate;
- (struct CGSize { double x0; double x1; })gridSize;
- (struct CGPoint { double x0; double x1; })anchorForIndex:(unsigned long long)a0;
- (void)setAnchoredCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchoredCellFrame;
- (unsigned long long)nextMajorIndexFromIndex:(unsigned long long)a0;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })occupyGridSpots:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })_anchorForIndex:(unsigned long long)a0 totalNumGridSpots:(unsigned long long)a1;
- (void)_buildOccupiedGridMap:(const void *)a0 inIndexesToTryToSnap:(id)a1 outIndexesToSnap:(id)a2 outIndexesToPlace:(id)a3;
- (BOOL)snapIndexes:(id)a0 ofAnchorPointsToGrid:(void *)a1 unique:(BOOL)a2;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })findAvailableAnchorPoints:(unsigned long long)a0 occupiedAnchorPoints:(const void *)a1;

@end
