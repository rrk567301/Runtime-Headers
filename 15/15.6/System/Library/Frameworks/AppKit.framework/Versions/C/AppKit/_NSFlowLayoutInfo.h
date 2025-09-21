@class NSCollectionViewFlowLayout, NSMutableArray;

@interface _NSFlowLayoutInfo : NSObject {
    char _useFloatingHeaderFooter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleBounds;
    struct CGSize { double width; double height; } _layoutSize;
    char _isValid;
    struct CGSize { double width; double height; } _computedEstimatedSum;
    long long _computedEstimatedCount;
}

@property (readonly, nonatomic) NSMutableArray *sections;
@property (nonatomic) char usesFloatingHeaderFooter;
@property (nonatomic) double dimension;
@property (nonatomic) char horizontal;
@property (nonatomic) char leftToRight;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct { int commonRowHorizontalAlignment; int lastRowHorizontalAlignment; int rowVerticalAlignment; } rowAlignmentOptions;
@property (weak, nonatomic) NSCollectionViewFlowLayout *layout;
@property (nonatomic) char estimatesSizes;
@property (nonatomic) struct CGSize { double width; double height; } dropTargetGapSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } computedEstimatedSize;
@property (readonly) char _collapsesSectionsToFirstItem;

- (id)copy;
- (id)init;
- (void).cxx_destruct;
- (id)snapshot;
- (id)addSection;
- (void)didUpdateSizeForSection:(long long)a0 withDelta:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(id)a0;
- (void)invalidate:(char)a0;
- (id)invalidatedIndexPaths;
- (char)section:(id)a0 shouldShowCollapseButton:(char)a1;
- (id)setSize:(struct CGSize { double x0; double x1; })a0 forItemAtIndexPath:(id)a1;
- (id)specifiedItemSizes;

@end
