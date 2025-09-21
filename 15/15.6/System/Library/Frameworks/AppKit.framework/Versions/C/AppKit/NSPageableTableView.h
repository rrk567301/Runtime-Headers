@class NSString;

@interface NSPageableTableView : NSTableView <NSTableViewDelegate> {
    long long _displayedRowCount;
    long long _pageNumber;
    double _lastVisibleHeight;
    char _isTiling;
    char _isPaged;
    id _proxyDelegate;
}

@property long long displayedRowCount;
@property (readonly) long long pageCount;
@property long long page;
@property (getter=isPaged) char paged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (void)_commonPageTableInit;
- (void)_updateLastVisibleHeightIfNeeded;
- (void)_updateMinimumHeightConstraint;
- (long long)displayedRowCount;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (long long)page;
- (long long)pageCount;
- (char)preservesContentDuringLiveResize;
- (void)scrollToPage;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(char)a1;
- (void)setDisplayedRowCount:(long long)a0;
- (void)setPage:(long long)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (void)tile;

@end
