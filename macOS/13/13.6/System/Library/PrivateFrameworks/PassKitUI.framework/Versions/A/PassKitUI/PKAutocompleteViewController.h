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
- (void)_registerForNotifications;
- (id)_separatorView;
- (void)_unregisterForNotifications;
- (void)awakeFromNib;
- (void)hide;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)reloadData;
- (void)showForView:(id)a0;
- (void)tableView:(id)a0 didRemoveRowView:(id)a1 forRow:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)_anotherMenuWentUp:(id)a0;
- (void)_updateWindowFrame;
- (long long)_lastVisibleRow;
- (void)tableViewDidArrowUpBeyondStart:(id)a0;
- (void)_addLocalEventMonitor;
- (void)_autoselectRowDirection:(BOOL)a0;
- (void)_didResignKey:(id)a0;
- (long long)_firstVisibleRow;
- (void)_removeLocalEventMonitor;
- (void)_selectRowWithKeyboard;
- (void)tableView:(id)a0 didSelectRow:(long long)a1;

@end
