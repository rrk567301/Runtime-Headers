@class PXSItemTextFinderClient, PXSItem, NSTextFinder, NSOutlineView, PXSettings, NSString;

@interface PXSModuleController : NSViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, PXSettingsKeyPathObserver, NSUserInterfaceValidations, PXSItemFinderClient>

@property (readonly, nonatomic) NSOutlineView *outlineView;
@property (readonly, nonatomic) PXSItem *rootItem;
@property (readonly, nonatomic, getter=isTextFinderLoaded) BOOL textFinderLoaded;
@property (readonly, nonatomic) NSTextFinder *textFinder;
@property (readonly, nonatomic) PXSItemTextFinderClient *textFinderClient;
@property (readonly, nonatomic) PXSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXSItem *firstSelectedItem;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)keyDown:(id)a0;
- (void)loadView;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (double)outlineView:(id)a0 heightOfRowByItem:(id)a1;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)performFindPanelAction:(id)a0;
- (void)performTextFinderAction:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)a_find:(id)a0;
- (id)_itemForOutlineViewItem:(id)a0;
- (id)_outlineViewItemForItem:(id)a0;
- (long long)_rowForItem:(id)a0 expandIfNeeded:(BOOL)a1;
- (void)_updateVisibleChildrenOfItem:(id)a0;
- (void)_updateVisibleItems;
- (void)scrollItemToVisible:(id)a0;

@end
