@class NSString;

@interface NSPageableTableView : NSTableView <NSTableViewDelegate> {
    long long _displayedRowCount;
    long long _pageNumber;
    double _lastVisibleHeight;
    BOOL _isTiling;
    BOOL _isPaged;
    id _proxyDelegate;
}

@property long long displayedRowCount;
@property (readonly) long long pageCount;
@property long long page;
@property (getter=isPaged) BOOL paged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tile;
- (void)keyDown:(id)a0;
- (BOOL)preservesContentDuringLiveResize;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (long long)page;
- (long long)pageCount;
- (void)setPage:(long long)a0;
- (void)_commonPageTableInit;
- (void)_updateMinimumHeightConstraint;
- (long long)displayedRowCount;
- (void)scrollToPage;
- (void)_updateLastVisibleHeightIfNeeded;
- (void)setDisplayedRowCount:(long long)a0;

@end
