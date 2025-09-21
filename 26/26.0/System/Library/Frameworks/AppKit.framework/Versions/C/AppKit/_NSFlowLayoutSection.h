@class NSArray, NSMutableSet, _NSFlowLayoutInfo, NSMutableArray;

@interface _NSFlowLayoutSection : NSObject {
    BOOL _isValid;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _validRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rectToKeepValid;
    NSMutableSet *_invalidatedIndexPaths;
    BOOL _isCollapsed;
    BOOL _recommendedAboutShowingSectionCollapseButton;
    BOOL _lastRecommendationWasShowSectionCollapseButton;
}

@property (readonly, nonatomic) NSMutableArray *items;
@property (readonly, nonatomic) NSMutableArray *rows;
@property (nonatomic) double verticalInterstice;
@property (nonatomic) double horizontalInterstice;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } sectionMargins;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } headerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } footerFrame;
@property (readonly, nonatomic) double headerDimension;
@property (readonly, nonatomic) double footerDimension;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } effectiveHeaderFrameWithSectionMarginsApplied;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } effectiveFooterFrameWithSectionMarginsApplied;
@property (weak, nonatomic) _NSFlowLayoutInfo *layoutInfo;
@property (nonatomic) struct { int commonRowHorizontalAlignment; int lastRowHorizontalAlignment; int rowVerticalAlignment; } rowAlignmentOptions;
@property (nonatomic) BOOL fixedItemSize;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (readonly, nonatomic) double otherMargin;
@property (readonly, nonatomic) double beginMargin;
@property (readonly, nonatomic) double endMargin;
@property (readonly, nonatomic) double actualGap;
@property (readonly, nonatomic) double lastRowBeginMargin;
@property (readonly, nonatomic) double lastRowEndMargin;
@property (readonly, nonatomic) double lastRowActualGap;
@property (readonly, nonatomic) BOOL lastRowIncomplete;
@property (nonatomic) long long itemsCount;
@property (readonly, nonatomic) long long itemsByRowCount;
@property (readonly, nonatomic) long long indexOfIncompleteRow;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } validItemRange;
@property (readonly, nonatomic) NSArray *invalidatedIndexPaths;
@property (readonly, nonatomic) unsigned long long rowsCount;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic) double scrollOffset;

- (id)snapshot;
- (void)sizeChangedForItem:(id)a0 atIndexPath:(id)a1 inRow:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(id)a0;
- (void)invalidate;
- (id)addItem;
- (void)logInvalidSizes;
- (void)logInvalidSizesForHorizontalDirection:(BOOL)a0 warnAboutDelegateValues:(BOOL)a1;
- (id)init;
- (void)setEstimatedSize:(struct CGSize { double x0; double x1; })a0 forSection:(long long)a1;
- (void)addInvalidatedIndexPath:(id)a0;
- (id)rowsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)estimatedIndexOfItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setHeaderDimension:(double)a0 forSection:(long long)a1;
- (id)addRowAtEnd:(BOOL)a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 forItemAtIndexPath:(id)a1 invalidationContext:(id)a2;
- (id)copyFromLayoutInfo:(id)a0;
- (void)setFooterDimension:(double)a0 forSection:(long long)a1;
- (void)computeLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSection:(long long)a1 invalidating:(BOOL)a2 invalidationContext:(id)a3;
- (void).cxx_destruct;
- (void)updateEstimatedSizeForSection:(long long)a0;
- (void)_computeLayoutForSectionIndex:(long long)a0 rightToLeft:(BOOL)a1 minimumWidth:(double)a2;
- (void)fixupLastRowItemAlignment;
- (unsigned long long)rowIndexForItemAtIndex:(unsigned long long)a0;
- (void)transformItemIfInCollapsedRowEndZone:(id)a0;

@end
