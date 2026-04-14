@class ABAccountRepository, NSString;

@interface ABAccountDataDeletionOperation : NSOperation {
    ABAccountRepository *_accountRepository;
    NSString *_accountIdentifier;
}

+ (id)os_log;

- (void).cxx_destruct;
- (void)main;
- (id)initWithAccountRepository:(id)a0 accountIdentifier:(id)a1;
- (id)makeAddressBook;
- (void)deleteDataFromAddressBook:(id)a0;

@end
