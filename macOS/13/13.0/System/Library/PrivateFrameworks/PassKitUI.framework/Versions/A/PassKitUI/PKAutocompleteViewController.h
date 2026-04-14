@class PKAutocompleteWindow, PKAutocompleteTableView, NSView, NSString, PKAutocompleteRowCache;
@protocol PKAutocompleteViewControllerDelegate;

@interface PKAutocompleteViewController : NSViewController <NSTableViewDataSource, PKAutocompleteTableViewDelegate>

@property (retain, nonatomic) PKAutocompleteWindow *window;
@property (retain, nonatomic) PKAutocompleteTableView *tableView;
@property (retain, nonatomic) PKAutocompleteRowCache *rowCache;
@property (weak, nonatomic) NSView *autocompletingView;
@property (retain, nonatomic) id eventMonitor;
@property (nonatomic, getter=isRegisteredForNotifications) BOOL registeredForNotifications;
@property (weak, nonatomic) id<PKAutocompleteViewControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reloadData;
- (void)awakeFromNib;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 didRemoveRowView:(id)a1 forRow:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (void)hide;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (id)_separatorView;
- (void)showForView:(id)a0;
- (void)_anotherMenuWentUp:(id)a0;
- (void)_updateWindowFrame;
- (void)_didResignKey:(id)a0;
- (void)tableView:(id)a0 didSelectRow:(long long)a1;
- (void)tableViewDidArrowUpBeyondStart:(id)a0;
- (void)_addLocalEventMonitor;
- (void)_removeLocalEventMonitor;
- (void)_selectRowWithKeyboard;
- (void)_autoselectRowDirection:(BOOL)a0;
- (long long)_firstVisibleRow;
- (long long)_lastVisibleRow;

@end
