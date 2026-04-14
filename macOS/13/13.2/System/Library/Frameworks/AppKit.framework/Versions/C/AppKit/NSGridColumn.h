@class NSLayoutXAxisAnchor, NSGridView;

@interface NSGridColumn : NSObject <NSCoding> {
    NSGridView *_owningGridView;
    NSLayoutXAxisAnchor *_leading;
    long long _hasContentInGeneration;
    long long _xPlacement;
    double _width;
    double _trailingPadding;
    double _leadingPadding;
    BOOL _hidden;
}

@property (readonly, weak) NSGridView *gridView;
@property (readonly) long long numberOfCells;
@property long long xPlacement;
@property double width;
@property double leadingPadding;
@property double trailingPadding;
@property (getter=isHidden) BOOL hidden;

- (void)dealloc;
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
- (id)cellAtIndex:(long long)a0;
- (void)mergeCellsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)_indexOfCell:(id)a0;
- (id)_leadingBoundaryAnchor;
- (id)_leadingContentAnchor;
- (id)_findTrailingBoundaryAnchorAndContentPadding:(double *)a0;
- (id)_trailingBoundaryAnchor;
- (id)_trailingContentAnchor;
- (id)_nextVisibleColumn;
- (id)_previousVisibleColumn;

@end
