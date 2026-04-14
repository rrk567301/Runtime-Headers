@class NSView, AMSUISpyglassPurchasesAccountView, AMSUISpyglassPurchasesHeaderView;

@interface AMSUISpyglassPurchasesView : NSView

@property (retain) AMSUISpyglassPurchasesHeaderView *headerView;
@property (retain) NSView *contentView;
@property (retain) AMSUISpyglassPurchasesAccountView *accountContentView;

- (void).cxx_destruct;
- (void)layout;
- (BOOL)isFlipped;
- (void)reloadAccounts;
- (void)setLoading:(BOOL)a0;
- (void)changeAccount:(id)a0;
- (id)initWithDelegate:(id)a0 shouldShowPayments:(BOOL)a1;

@end
