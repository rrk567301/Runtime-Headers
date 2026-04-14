@interface RemindersUICore.TTRMSuggestionTableViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource> {
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ maxWidth;
    void /* unknown type, empty encoding */ minWidth;
    void /* unknown type, empty encoding */ maxHeight;
    void /* unknown type, empty encoding */ minHeight;
    void /* unknown type, empty encoding */ maxContentSize;
    void /* unknown type, empty encoding */ cellInfoByIdentifier;
}

@property (nonatomic, weak) void /* function */ tableView;
@property (nonatomic, weak) void /* function */ tableViewLeadingConstraint;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void)insertNewline:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)moveUp:(id)a0;
- (void)tableView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (void)moveDown:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;

@end
