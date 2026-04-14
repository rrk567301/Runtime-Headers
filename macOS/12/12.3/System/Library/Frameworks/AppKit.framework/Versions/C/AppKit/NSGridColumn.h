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
- (void)mergeCellsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_trailingContentAnchor;
- (void)_removedFromGridView;
- (void)_sanityCheck;
- (void)_forEachCell:(id /* block */)a0;
- (void)set_hasContentInGeneration:(long long)a0;
- (long long)_hasContentInGeneration;
- (id)_leadingContentAnchor;
- (id)cellAtIndex:(long long)a0;
- (id)initWithGridView:(id)a0;
- (long long)_indexOfCell:(id)a0;
- (id)_previousVisibleColumn;
- (id)_leadingBoundaryAnchor;
- (id)_nextVisibleColumn;
- (id)_findTrailingBoundaryAnchorAndContentPadding:(double *)a0;
- (id)_trailingBoundaryAnchor;

@end
