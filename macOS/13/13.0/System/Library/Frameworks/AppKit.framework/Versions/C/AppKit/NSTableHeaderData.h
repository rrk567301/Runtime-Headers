@class NSTableHeaderView, NSMutableArray;

@interface NSTableHeaderData : NSObject {
    NSMutableArray *_views;
}

@property (nonatomic) NSTableHeaderView *headerView;

- (void)dealloc;
- (void)removeColumn:(long long)a0;
- (void)beginDraggingColumn:(long long)a0;
- (id)initWithHeaderView:(id)a0;
- (void)removeAllKnownSubviews;
- (void)_addViewForTableColumn:(id)a0 column:(long long)a1;
- (void)addTableColumn:(id)a0 atIndex:(long long)a1;
- (void)updateViews;
- (void)_updateFramesAnimated:(BOOL)a0;
- (void)didMoveFromColumn:(long long)a0 toColumn:(long long)a1 animated:(BOOL)a2;
- (void)endDraggingColumn:(long long)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_draggedColumnHeaderViewFrameForColumn:(long long)a0;
- (void)tableHeaderViewDraggedDistanceChanged;
- (id)headerCellViewAtColumn:(long long)a0;
- (void)updateColumnViewWidthsAnimated:(BOOL)a0;

@end
