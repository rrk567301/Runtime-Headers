@class NSMutableDictionary, NSDictionary, PPSpecifierExtensionItem, NSMutableArray, PPSpecifierTableCellView, NSString, NSLayoutConstraint, NSTableView, PPSpecifier, NSArray, NSView, PPFlexibleSpaceSpecifier, NSColor;
@protocol PPSpecifierTableViewControllerDelegate;

@interface PPSpecifierTableViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource> {
    NSMutableArray *_specifiers;
    NSColor *_backgroundColor;
}

@property (weak) PPSpecifierTableCellView *selectedCellView;
@property (weak) PPSpecifierExtensionItem *selectedExtensionItem;
@property (retain) NSDictionary *extensions;
@property (retain) NSMutableDictionary *viewHeights;
@property (weak) PPFlexibleSpaceSpecifier *flexibleSpaceSpecifier;
@property (retain) NSLayoutConstraint *tableViewWidthConstraint;
@property (weak) NSTableView *specifierTableView;
@property (retain) NSArray *specifiers;
@property (weak) id<PPSpecifierTableViewControllerDelegate> delegate;
@property (readonly) NSView *tableView;
@property (readonly) PPSpecifier *selectedSpecifier;
@property (retain) NSView *detailsViewPlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)viewDidLayout;
- (id)tableView;
- (id)initWithDelegate:(id)a0;
- (void)awakeFromNib;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)specifiers;
- (void)setSpecifiers:(id)a0;
- (BOOL)revealElementForKey:(id)a0;
- (id)selectedSpecifier;
- (BOOL)selectSpecifier:(id)a0;
- (void)_loadExtensionSpecifiers;
- (void)sizeTableToFit;
- (void)insertSpecifiers:(id)a0 atIndexes:(id)a1 withAnimation:(unsigned long long)a2;
- (void)removeSpecifiers:(id)a0 withAnimation:(unsigned long long)a1;
- (double)_updateFlexibleSpecifier;
- (void)reloadRowForSpecifier:(id)a0;
- (void)insertSpecifiers:(id)a0 atIndexes:(id)a1;
- (void)removeSpecifiers:(id)a0;

@end
