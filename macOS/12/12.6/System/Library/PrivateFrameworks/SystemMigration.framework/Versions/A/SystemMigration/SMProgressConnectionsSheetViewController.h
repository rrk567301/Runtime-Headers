@class NSTextField, NSArray, NSView, NSButtonCell, NSScrollView, NSString, NSTableView;

@interface SMProgressConnectionsSheetViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>

@property (retain, nonatomic) NSArray *dataStore;
@property (weak) NSButtonCell *doneButton;
@property (weak) NSView *borderView;
@property (weak) NSScrollView *scrollView;
@property (weak) NSTextField *recommendationLabel;
@property (retain) NSString *recommendation;
@property (weak) NSTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)donePressed:(id)a0;
- (void)updateScrollViewElastricity;
- (id)attributedStringForRemoteInterfaceName:(id)a0 localInterfaceName:(id)a1 remoteName:(id)a2;
- (id)initWithConnectionDisplayModels:(id)a0;
- (void)closeSheetIfIsVisible;
- (void)updateConnectionDisplayModels:(id)a0;

@end
