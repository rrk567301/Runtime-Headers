@class NSTextField, NSString, NSTouchBar, ACAccountStore, iCloudTouchBarController, NSMutableArray, ACAccount, NSButton, NSWindow, NSTableView;

@interface MMSignoutSheetController : NSObject <NSTableViewDataSource, NSTableViewDelegate, NSTouchBarProvider> {
    ACAccountStore *_accountStore;
}

@property (weak) NSWindow *signoutSheet;
@property (weak) NSTableView *serviceTable;
@property (weak) NSTextField *messageText;
@property (weak) NSButton *continueButton;
@property (weak) NSButton *cancelButton;
@property (retain) NSMutableArray *serviceInfoList;
@property NSWindow *parentWindow;
@property (retain) iCloudTouchBarController *touchBarController;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (void)cancelButtonPressed:(id)a0;
- (id)initWithAccount:(id)a0;
- (void)checkboxClicked:(id)a0;
- (void)showSignoutSheetForDataclassActions:(id)a0 usingWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)continueButtonPressed:(id)a0;
- (id)enabledServices;
- (long long)countOfEnabledCheckboxes;

@end
