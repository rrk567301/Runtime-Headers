@class PKPaymentPass, PKPassLibrary, PKPaymentService, NSArray, NSTableView, NSString;
@protocol PKCardsTableViewControllerDelegate;

@interface PKCardsTableViewController : NSViewController <NSTabViewDelegate, NSTableViewDataSource>

@property (retain) PKPassLibrary *passLibrary;
@property (retain) PKPaymentService *paymentService;
@property (retain) NSTableView *paymentPassesTable;
@property (retain) NSArray *tableContent;
@property (retain) NSString *defaultCardIdentifier;
@property (weak) id<PKCardsTableViewControllerDelegate> delegate;
@property (readonly) PKPaymentPass *selectedCard;
@property (retain, nonatomic) NSString *autoSelectCardIdentifier;
@property (retain) NSArray *cards;
@property (retain) PKPaymentPass *defaultCard;
@property (retain) NSArray *otherActiveCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (void)tableViewSelectionDidChange:(id)a0;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)_reloadPasses;
- (void)_updateTableContent;
- (BOOL)setSelectedCard:(id)a0;

@end
