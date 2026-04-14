@class ABAccountRepository, NSString;

@interface ABSummaryOperation : NSOperation {
    ABAccountRepository *_accountRepository;
    NSString *_accountIdentifier;
}

- (void)dealloc;
- (void)main;
- (id)initWithAccountRepository:(id)a0 accountIdentifier:(id)a1;
- (id)makeAccount;
- (id)makeAddressBookForAccount:(id)a0;
- (id)makeSummaryOfAddressBook:(id)a0;
- (void)exportSummary:(id)a0 accountName:(id)a1;
- (id)outputURLWithAccountName:(id)a0;

@end
