@class NSTextField, NSArray, WBSPerSitePreference, NSString, WBSFaviconRequestsController, NSButton, TableViewPlus;

@interface NotificationPreferencesController : NSViewController <TableViewPlusDelegate, NSTableViewDataSource> {
    BOOL _didAwakeFromNib;
    WBSFaviconRequestsController *_requestsController;
    BOOL _isWaitingForIconRequestCancellation;
}

@property (weak, nonatomic) NSButton *removeButton;
@property (weak, nonatomic) NSTextField *emptyTablePlaceholderText;
@property (weak, nonatomic) NSButton *canPromptForPushNotificationsCheckbox;
@property (weak, nonatomic) TableViewPlus *policyTableView;
@property (retain, nonatomic) NSArray *permissionData;
@property (readonly, nonatomic) WBSPerSitePreference *notificationsPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)removeSelectedItems:(id)a0;
- (BOOL)tableView:(id)a0 shouldEditOnSingleClick:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;
- (BOOL)tableView:(id)a0 keyDown:(id)a1;
- (void)_updateVisibilityOfPlaceholderText;
- (void)_reloadTableData;
- (BOOL)_canRemoveSelectedItems;
- (void)_notificationPermissionsChanged:(id)a0;
- (void)toggleCanPromptForPushNotifications:(id)a0;
- (void)_processRemotePermissions:(id)a0 withLocalPermissions:(id)a1 intoCombinedPermissionData:(id)a2;
- (void)_updatePermissionDataAndReloadTable;
- (void)_updateRemoveButtonState;

@end
