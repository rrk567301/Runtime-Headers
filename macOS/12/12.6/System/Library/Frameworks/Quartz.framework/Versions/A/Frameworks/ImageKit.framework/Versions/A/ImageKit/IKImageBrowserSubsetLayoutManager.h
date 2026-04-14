@class NSArray, IKImageBrowserLayoutManager, NSMutableIndexSet;

@interface IKImageBrowserSubsetLayoutManager : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _frame;
    struct { double width; double height; } _contentSize;
    struct __IKImageBrowserLayoutParameter { id x0; struct CGSize { double x0; double x1; } x1; unsigned int x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; int x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; int x11; float x12; struct CGSize { double x0; double x1; } x13; struct CGSize { double x0; double x1; } x14; } *_layoutParameters;
    NSArray *_groups;
    NSMutableIndexSet *_ghostIndexes;
    int _collapsedCellCount;
    id _parentGroup;
    int _headerHeight;
    IKImageBrowserLayoutManager *_parent;
}

@property BOOL visuallyCollapsed;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)groups;
- (void)setGroups:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setContentSize:(struct { double x0; double x1; })a0;
- (int)headerHeight;
- (void)setHeaderHeight:(int)a0;
- (int)columnAtIndex:(int)a0;
- (id)cellAtIndex:(int)a0;
- (BOOL)updateLayout;
- (id)cellIndexesInRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (BOOL)isGridBased;
- (double)tailOffset;
- (double)headerOffset;
- (void)prepareRenderingOrderingWithIndexes:(id)a0;
- (unsigned long long)indexToRenderForNonOrderedIndex:(unsigned long long)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })cellFrameAtIndex:(unsigned long long)a0;
- (id)initWithParameters:(struct __IKImageBrowserLayoutParameter { id x0; struct CGSize { double x0; double x1; } x1; unsigned int x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; int x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; int x11; float x12; struct CGSize { double x0; double x1; } x13; struct CGSize { double x0; double x1; } x14; } *)a0 parent:(id)a1;
- (void)computeRowsCount;
- (int)additionalHeightAtRow:(int)a0;
- (struct CGSize { double x0; double x1; })adjustedMargin;
- (id)parentGroup;
- (int)clientIndexToGridIndex:(int)a0;
- (long long)groupIndexForGridIndex:(int)a0;
- (id)gridIndexesToClientIndexes:(id)a0;
- (int)gridIndexToClientIndex:(int)a0;
- (void)collapsedStateChanged:(id)a0;
- (void)spaceOutSubmanagerCellsForDropAtIndex:(unsigned long long)a0 nearestCell:(unsigned long long)a1 isMoreThanHalfwayAcrossCell:(BOOL)a2;
- (void)invalidateCacheAtIndexes:(id)a0;
- (struct { double x0; double x1; })computeContentSize;
- (id)cellIndexesAtLocation:(struct { double x0; double x1; })a0;
- (int)cellIndexAtColumn:(int)a0 andRow:(int)a1;
- (long long)nearestCellOfPosition:(struct { double x0; double x1; })a0;
- (id)parentLayoutManager;
- (void)adjustHorizontalOffsetIfNeeded;
- (void)resetHorizontalOffset;
- (void)scrollWheel:(id)a0 gesture:(BOOL)a1;
- (void)endGesture:(id)a0;
- (int)screenColumnAtIndex:(unsigned long long)a0;
- (int)indexOfHeaderMasterCell;
- (struct { double x0; double x1; })contentOrigin;
- (struct { double x0; double x1; })gridSize;
- (void)zSortWithZValues:(double *)a0;
- (struct CGPoint { double x0; double x1; })topLeftItemPosition;
- (double)zAtIndex:(unsigned long long)a0;
- (void)parentWillDie;
- (void)setParentGroup:(id)a0;
- (void)setGridOrigin:(struct { double x0; double x1; })a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })gridFrame;
- (void)_updateFrameSize;
- (void)computeGroupIndexTransformations;
- (long long)groupIndexForClientIndex:(int)a0;

@end
