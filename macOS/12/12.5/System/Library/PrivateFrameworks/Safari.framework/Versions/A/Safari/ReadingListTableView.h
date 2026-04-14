@class SidebarSearchFieldView, NSString, NSSearchField, NSTableCellView;
@protocol ReadingListTableViewLiveResizeDelegate;

@interface ReadingListTableView : TableViewPlus <ScrollViewPlusScrollObserver> {
    NSTableCellView *_lastCellView;
    SidebarSearchFieldView *_searchFieldView;
}

@property (nonatomic, getter=isHandlingMouseDown) BOOL handlingMouseDown;
@property (readonly, nonatomic) long long highlightedRowIndex;
@property (readonly, retain, nonatomic) NSSearchField *searchField;
@property (readonly, retain, nonatomic) SidebarSearchFieldView *searchFieldView;
@property (weak, nonatomic) id<ReadingListTableViewLiveResizeDelegate> liveResizeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)viewDidEndLiveResize;
- (double)_totalHeightOfTableView;
- (id)_rowViewAtRow:(long long)a0 makeIfNecessary:(BOOL)a1;
- (void)scrollView:(id)a0 didScrollToPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)highlightRowByIndex:(long long)a0;

@end
