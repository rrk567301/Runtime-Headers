@class ABAddressBook;
@protocol ABPersonListHeadlining;

@interface ABBrowsingSearchConfiguration : ABPersonSearchConfiguration

@property (retain) ABAddressBook *addressBook;
@property (retain) id<ABPersonListHeadlining> headliner;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)incrementSearchCount;
- (void)configureForBrowsingAccount:(id)a0 group:(id)a1;
- (BOOL)shouldUnifyPeople;
- (void)searchForString:(id)a0;
- (void)configurePersonList:(id)a0 forBrowsingAccount:(id)a1 group:(id)a2;

@end
