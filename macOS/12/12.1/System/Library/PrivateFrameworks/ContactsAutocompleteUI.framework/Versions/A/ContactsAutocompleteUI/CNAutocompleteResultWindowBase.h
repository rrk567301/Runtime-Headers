@class NSView, NSString, NSScrollView, NSArray, CNAutocompleteResultTableView, NSVisualEffectView, CNAutocompleteStore, NSLayoutConstraint;
@protocol CNAutocompleteResultWindowDelegate;

@interface CNAutocompleteResultWindowBase : NSWindow <NSTableViewDelegate, NSTableViewDataSource> {
    id<CNAutocompleteResultWindowDelegate> _autocompleteDelegate;
}

@property (retain, nonatomic) NSVisualEffectView *effectView;
@property (retain, nonatomic) CNAutocompleteResultTableView *table;
@property (retain, nonatomic) NSScrollView *scrollView;
@property (retain, nonatomic) NSLayoutConstraint *maxScrollHeight;
@property (retain, nonatomic) NSLayoutConstraint *scrollHeight;
@property (retain, nonatomic) NSLayoutConstraint *tableWidth;
@property (retain, nonatomic) NSLayoutConstraint *windowWidth;
@property (retain, nonatomic) NSLayoutConstraint *maxWindowWidth;
@property (nonatomic) long long maxDisplayedRows;
@property (nonatomic) long long maxResults;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) CNAutocompleteStore *store;
@property (weak, nonatomic) id<CNAutocompleteResultWindowDelegate> autocompleteDelegate;
@property (nonatomic) BOOL allowsEmptySelection;
@property (nonatomic) BOOL disableOriginAdjustment;
@property (readonly, nonatomic) double leftContentInset;
@property (retain, nonatomic) NSView *headerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGPoint { double x0; double x1; })adjustedFrameOriginFromOrigin:(struct CGPoint { double x0; double x1; })a0;

- (id)init;
- (void).cxx_destruct;
- (void)setWidth:(double)a0;
- (id)tableView;
- (BOOL)canBecomeKeyWindow;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (long long)selectedRow;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (void)tableView:(id)a0 didClickTableColumn:(id)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)setMaxWidth:(double)a0;
- (float)_backdropBleedAmount;
- (void)setMaxHeight:(double)a0;
- (void)setup;
- (id)currentSelection;
- (void)setupConstraints;
- (void)setupTableView;
- (void)setupScrollView;
- (void)moveUp;
- (void)setTableViewAllowsVibrancy:(BOOL)a0;
- (id)viewForResult:(id)a0;
- (void)moveDown;
- (void)setupVisualEffectView;
- (double)defaultWindowWidth;
- (id)resultForRow:(long long)a0;
- (unsigned long long)visibleRowCount;
- (void)updateSizes;
- (void)scrollToSelectedRow;
- (id)viewForRow:(long long)a0;
- (id)displayStringForSelectedResult;

@end
