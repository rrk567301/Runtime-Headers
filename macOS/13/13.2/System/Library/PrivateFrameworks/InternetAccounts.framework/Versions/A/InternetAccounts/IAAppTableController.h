@class NSArray, NSScrollView, IAAccount, NSTableView, NSMutableArray, NSDictionary;

@interface IAAppTableController : NSViewController {
    BOOL _enabled;
    NSArray *_topLevelObjects2;
    NSScrollView *_scrollView;
    NSTableView *_appTable;
    NSDictionary *_pluginProperties;
}

@property (retain, nonatomic) IAAccount *account;
@property (retain) NSMutableArray *apps;
@property (retain) NSMutableArray *pairedServices;
@property (retain) id delegate;
@property BOOL spinOnSelection;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (id)view;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)initWithAccount:(id)a0;
- (void)setServices:(id)a0;
- (void)_sortApps;
- (void)_applyExceptions:(id)a0;
- (id)rowViewForApp:(id)a0;
- (void)forceAppIDsEnabled:(id)a0;
- (void)updateTable;
- (id)appsTable;
- (id)appAtRow:(long long)a0;
- (id)selectedApps;
- (void)selectAllApps;
- (id)appsWithBundleIDs:(id)a0;
- (void)startProgressForApp:(id)a0;
- (void)stopProgressForApp:(id)a0;
- (void)selectApp:(id)a0;
- (void)deselectApp:(id)a0;
- (void)selectAppIDs:(id)a0;
- (void)deselectAppID:(id)a0;
- (void)stopProgressForAllApps;
- (void)configureForProvider:(id)a0;
- (void)checkbox:(id)a0 clickedForApp:(id)a1;

@end
