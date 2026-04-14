@class NSLayoutYAxisAnchor, NSMutableArray, NSGridView;

@interface NSGridRow : NSObject <NSCoding> {
    NSGridView *_owningGridView;
    NSMutableArray *_cells;
    NSLayoutYAxisAnchor *_top;
    long long _yPlacement;
    long long _rowAlignment;
    long long _hasContentInGeneration;
    double _height;
    double _topPadding;
    double _bottomPadding;
    BOOL _hidden;
}

@property (readonly, weak) NSGridView *gridView;
@property (readonly) long long numberOfCells;
@property long long yPlacement;
@property long long rowAlignment;
@property double height;
@property double topPadding;
@property double bottomPadding;
@property (getter=isHidden) BOOL hidden;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)index;
- (void)_removedFromGridView;
- (void)_sanityCheck;
- (id)initWithGridView:(id)a0;
- (long long)_hasContentInGeneration;
- (void)set_hasContentInGeneration:(long long)a0;
- (void)_forEachCell:(id /* block */)a0;
- (void)_setViews:(id)a0;
- (id)_removeCellAtIndex:(long long)a0;
- (void)_insertCell:(id)a0 atIndex:(long long)a1;
- (void)_didInsertColumn:(id)a0 atIndex:(long long)a1;
- (void)_didDeleteColumnAtIndex:(long long)a0;
- (id)_cellAtIndex:(long long)a0 allocatingIfNeeded:(BOOL)a1;
- (id)cellAtIndex:(long long)a0;
- (void)mergeCellsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_topBoundaryAnchor;
- (id)_topContentAnchor;
- (id)_findBottomBoundaryAnchorAndContentOffset:(double *)a0;
- (id)_bottomBoundaryAnchor;
- (id)_bottomContentAnchor;
- (id)_nextVisibleRow;
- (id)_previousVisibleRow;

@end
