@class NSTableView, NSString;

@interface _MKTableViewController : _MKUIViewController <NSTableViewDataSource, NSTableViewDelegate>

@property (retain, nonatomic) NSTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)_defaultTableView;
- (id)_tableRootView;
- (Class)classForRootView;
- (double)defaultLeadingSeparatorInset;
- (double)defaultTrailingSeparatorInset;
- (void)updateTableHeightConstraintAnimated:(BOOL)a0;

@end
