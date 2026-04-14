@class NSTableView, NSString;

@interface _MKTableViewController : _MKUIViewController <NSTableViewDataSource, NSTableViewDelegate>

@property (retain, nonatomic) NSTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (id)separatorColor;
- (void)viewWillAppear:(BOOL)a0;
- (double)defaultLeadingSeparatorInset;
- (double)defaultTrailingSeparatorInset;
- (Class)classForRootView;
- (id)_defaultTableView;
- (void)updateTableHeightConstraintAnimated:(BOOL)a0;
- (id)_tableRootView;

@end
