@class ACAccountStore;

@interface CADACAccountStoreAccountsProvider : NSObject <CADACAccountsProvider>

@property (readonly, nonatomic) ACAccountStore *accountStore;

- (id)accounts;
- (void).cxx_destruct;
- (id)accountWithIdentifier:(id)a0;
- (id)initWithAccountStore:(id)a0;

@end
