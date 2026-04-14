@class NSTextField, PKPaymentProvisioningController, NSScrollView, NSArray, NSString, NSMutableArray, NSClipView, NSTableView;
@protocol PKSelectCredentialsViewControllerDelegate;

@interface PKSelectCredentialsViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, PKPaymentProvisioningControllerDelegate> {
    NSMutableArray *_sortedCredentials;
    BOOL _enabled;
    long long _context;
}

@property (weak) NSTextField *titleTextField;
@property (weak) NSTableView *tableView;
@property (weak) NSScrollView *scrollView;
@property (weak) NSClipView *clipView;
@property (copy) NSMutableArray *selectedItems;
@property (weak) id<PKSelectCredentialsViewControllerDelegate> delegate;
@property (readonly) PKPaymentProvisioningController *provisioningController;
@property (readonly, copy) NSArray *selectedCredentials;
@property (getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)selectAll;
- (void)paymentPassUpdatedOnCredential:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1;
- (void)updateList;
- (id)_sortedArray:(id)a0;
- (void)cardSelectedAction:(id)a0;

@end
