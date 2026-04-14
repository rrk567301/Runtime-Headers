@class NSString;
@protocol NSMenuDelegate, WFFilteringMenuDelegate;

@interface WFFilteringMenu : NSMenu <NSMenuDelegate, NSSearchFieldDelegate> {
    id<NSMenuDelegate> _delegate;
    struct OpaqueMenuRef { } *_carbonMenu;
}

@property (weak) id<WFFilteringMenuDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)initWithTitle:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })confinementRectForMenu:(id)a0 onScreen:(id)a1;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (BOOL)menu:(id)a0 updateItem:(id)a1 atIndex:(long long)a2 shouldCancel:(BOOL)a3;
- (void)menu:(id)a0 willHighlightItem:(id)a1;
- (void)menuDidClose:(id)a0;
- (BOOL)menuHasKeyEquivalent:(id)a0 forEvent:(id)a1 target:(id *)a2 action:(SEL *)a3;
- (void)menuNeedsUpdate:(id)a0;
- (void)menuWillOpen:(id)a0;
- (long long)numberOfItemsInMenu:(id)a0;
- (BOOL)_isSearchScrolledOutOfView:(id)a0;
- (void)performSearchWithString:(id)a0 inMenu:(id)a1;
- (void)_selectSearchItem:(id)a0;
- (id)_singleEnabledMenuItem;
- (void)makeSearchFieldKey:(id)a0;
- (BOOL)searchFieldShouldTakeFocus:(id)a0;
- (void)setUpSearchFieldInMenu:(id)a0 withString:(id)a1;

@end
