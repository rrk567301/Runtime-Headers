@class PKPaymentSetupViewController, NSArray, PKPaymentSetupProduct, NSString, NSTableView, PKPaymentWebService;

@interface PKPaymentSetupDisambiguationViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>

@property (retain) NSArray *possibleProducts;
@property long long context;
@property (retain) PKPaymentWebService *paymentWebService;
@property (retain) NSTableView *tableView;
@property unsigned long long selectedIndex;
@property (weak, nonatomic) PKPaymentSetupViewController *setupVC;
@property (retain) PKPaymentSetupProduct *selectedProduct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewWillAppear;
- (id)nibBundle;
- (void)radioButtonAction:(id)a0;
- (id)initWithPaymentWebService:(id)a0 possibleProducts:(id)a1 context:(long long)a2;

@end
