@class NSString, NSSearchField, NSMutableArray, NSObject;
@protocol NSMenuRepresentationDelegate;

@interface NSTableViewBackedMenuRepresentation : NSTableView <NSMenuRepresentable, NSTableViewDelegate, NSTableViewDataSource, NSSearchFieldDelegate> {
    NSObject<NSMenuRepresentationDelegate> *_repDelegate;
    NSMutableArray *_visibleItems;
    NSMutableArray *_pendingItemStack;
    NSSearchField *_filterField;
    long long _numberOfVisibleItems;
    long long _cachedNumberOfMenuItems;
    unsigned long long _typeSelectBehavior;
    BOOL _isFiltering;
    BOOL _ignoresRowCalls;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_recursiveSetDefaultKeyViewLoop;
- (void)_controlTextDidChangeForTextField:(id)a0 isSwitchingModes:(BOOL)a1;
- (long long)_findDataSourcePositionAndAdd:(long long)a0;
- (void)_initializeDataSource;
- (void)_initializeFilterFieldIfNeeded;
- (BOOL)_isDataSourceInitialized;
- (void)_primitiveSetDefaultNextKeyView:(id)a0;
- (id)_textFieldResponderOrNil;
- (BOOL)acceptsFirstResponder;
- (void)appendArrangedSubview:(id)a0;
- (id)backingView;
- (void)controlTextDidChange:(id)a0;
- (id)currentlyVisibleSubviews;
- (void)endSearchQuery;
- (void)forEachVisibleSubviewDo:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtMenuIndex:(unsigned long long)a0;
- (void)insertArrangedSubviewAtMenuIndex:(long long)a0 forItem:(id)a1;
- (long long)menuIndexForView:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (long long)numberOfVisibleItems;
- (void)prepareCustomViewsForMenuOpening;
- (BOOL)refusesFirstResponder;
- (void)reloadData;
- (void)removeArrangedSubviewAtMenuIndex:(long long)a0;
- (id)representationDelegate;
- (void)setHidden:(BOOL)a0 forMenuItemAtIndex:(long long)a1;
- (void)setRepresentationDelegate:(id)a0;
- (void)startSearchQueryWithString:(id)a0 behavior:(unsigned long long)a1;
- (id)subviewAtMenuIndex:(long long)a0;
- (id)subviewAtMenuIndex:(long long)a0 creatingIfNeeded:(BOOL)a1;
- (id)subviewAtVisibleIndex:(long long)a0;
- (id)subviewAtVisibleIndex:(long long)a0 creatingIfNeeded:(BOOL)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)updateTrackingAreas;
- (id)viewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)visibleItemIndices;

@end
