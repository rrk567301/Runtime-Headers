@class NSCollectionViewFlowLayout, NSMutableArray;

@interface _NSFlowLayoutInfo : NSObject {
    BOOL _useFloatingHeaderFooter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleBounds;
    struct CGSize { double width; double height; } _layoutSize;
    BOOL _isValid;
    struct CGSize { double width; double height; } _computedEstimatedSum;
    long long _computedEstimatedCount;
}

@property (readonly, nonatomic) NSMutableArray *sections;
@property (nonatomic) BOOL usesFloatingHeaderFooter;
@property (nonatomic) double dimension;
@property (nonatomic) BOOL horizontal;
@property (nonatomic) BOOL leftToRight;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct { int commonRowHorizontalAlignment; int lastRowHorizontalAlignment; int rowVerticalAlignment; } rowAlignmentOptions;
@property (weak, nonatomic) NSCollectionViewFlowLayout *layout;
@property (nonatomic) BOOL estimatesSizes;
@property (nonatomic) struct CGSize { double width; double height; } dropTargetGapSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } computedEstimatedSize;
@property (readonly) BOOL _collapsesSectionsToFirstItem;

- (id)snapshot;
- (void)invalidate:(BOOL)a0;
- (void)didUpdateSizeForSection:(long long)a0 withDelta:(double)a1;
- (id)invalidatedIndexPaths;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(id)a0;
- (id)specifiedItemSizes;
- (id)copy;
- (id)setSize:(struct CGSize { double x0; double x1; })a0 forItemAtIndexPath:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)addSection;
- (BOOL)section:(id)a0 shouldShowCollapseButton:(BOOL)a1;

@end
