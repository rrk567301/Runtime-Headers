@class ABAccountRepository, NSString;

@interface ABAccountDataDeletionOperation : NSOperation {
    ABAccountRepository *_accountRepository;
    NSString *_accountIdentifier;
}

+ (id)os_log;

- (void)main;
- (void).cxx_destruct;
- (id)makeAddressBook;
- (void)deleteDataFromAddressBook:(id)a0;
- (id)initWithAccountRepository:(id)a0 accountIdentifier:(id)a1;

@end
