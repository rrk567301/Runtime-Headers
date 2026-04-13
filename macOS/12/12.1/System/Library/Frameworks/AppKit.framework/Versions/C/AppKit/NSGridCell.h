@class NSArray, NSView, NSGridRow, NSGridColumn;

@interface NSGridCell : NSObject <NSCoding> {
    NSGridCell *_headOfMergedCell;
    long long _xPlacement;
    long long _yPlacement;
    long long _rowAlignment;
}

@property (class, readonly) NSView *emptyContentView;

@property (retain) NSView *contentView;
@property (readonly, weak) NSGridRow *row;
@property (readonly, weak) NSGridColumn *column;
@property long long xPlacement;
@property long long yPlacement;
@property long long rowAlignment;
@property (copy) NSArray *customPlacementConstraints;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)layoutRect;
- (void)_removedFromGridView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_findMergeBounds;
- (id)_headOfMergedCell;
- (void)_sanityCheck;
- (BOOL)_isUnmergedOrHeadOfMergedRegion;
- (id)_optimalContentLayoutRect;
- (long long)_effectiveXPlacement;
- (long long)_effectiveYPlacement;
- (long long)_effectiveAlignment;
- (void)set_headOfMergedCell:(id)a0;
- (id)initWithRow:(id)a0 column:(id)a1;
- (void)_verifyConfigurability;
- (id)_findMergeTail;
- (BOOL)_isMerged;
- (BOOL)_isMergeHead;

@end
