@class NSString, NSSearchField, NSMutableArray, NSObject;
@protocol NSMenuRepresentationDelegate;

@interface NSTableViewBackedMenuRepresentation : NSTableView <NSMenuRepresentable, NSTableViewDelegate, NSTableViewDataSource, NSSearchFieldDelegate> {
    NSObject<NSMenuRepresentationDelegate> *_repDelegate;
    NSMutableArray *_visibleItems;
    NSSearchField *_filterField;
    long long _numberOfVisibleItems;
    long long _cachedNumberOfMenuItems;
    unsigned long long _typeSelectBehavior;
    BOOL _isFiltering;
    BOOL _ignoresRowCalls;
    BOOL _isSearchFieldNonEmpty;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (weak, nonatomic) NSObject<NSMenuRepresentationDelegate> *representationDelegate;
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
- (BOOL)_isContainedInMenu;
- (BOOL)_isDataSourceInitialized;
- (void)_primitiveSetDefaultNextKeyView:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_styleInsets;
- (id)_textFieldResponderOrNil;
- (id)_validateHitTest:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)accessibilityIsIgnored;
- (BOOL)allowsVibrancy;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })apertureFrame;
- (id)backingView;
- (void)controlTextDidChange:(id)a0;
- (void)endSearchQuery;
- (void)forEachMenuItemViewAtIndex:(long long)a0 performBlock:(id /* block */)a1;
- (void)forEachSubviewAtMenuIndex:(long long)a0 performBlock:(id /* block */)a1;
- (void)forEachVisibleSubview:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtMenuIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtVisibleIndex:(long long)a0;
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
- (void)removeArrangedSubviewAtVisibleIndex:(long long)a0;
- (void)setApertureFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0 forMenuItemAtIndex:(long long)a1;
- (void)startSearchQueryWithString:(id)a0 behavior:(long long)a1;
- (id)subviewAtMenuIndex:(long long)a0;
- (id)subviewAtMenuIndex:(long long)a0 creatingIfNeeded:(BOOL)a1;
- (id)subviewAtVisibleIndex:(long long)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)updateSizeForItemAtVisibleIndex:(long long)a0;
- (void)updateTrackingAreas;
- (id)viewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (long long)visibleIndexForMenuIndex:(long long)a0;
- (id)visibleItemIndexes;

@end
