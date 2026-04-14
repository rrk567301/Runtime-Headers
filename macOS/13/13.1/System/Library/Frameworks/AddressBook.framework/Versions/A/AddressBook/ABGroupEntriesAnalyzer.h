@class NSArray, NSMutableArray, ABAddressBook;
@protocol ABAccountHidingPolicy;

@interface ABGroupEntriesAnalyzer : NSObject {
    NSArray *_accounts;
    ABAddressBook *_addressBook;
    NSMutableArray *_directoryAccounts;
    NSMutableArray *_persistentAccounts;
    NSMutableArray *_smartGroups;
    NSMutableArray *_visibleAccounts;
    id<ABAccountHidingPolicy> _accountHidingPolicy;
}

- (void).cxx_destruct;
- (id)persistentAccounts;
- (void)analyzeAccount:(id)a0;
- (id)smartGroups;
- (id)directoryAccounts;
- (id)initWithAccounts:(id)a0 addressBook:(id)a1 hidingPolicy:(id)a2;
- (void)analyzeAccounts;
- (void)collectVisibleAccounts;
- (void)collectPersistentAccounts;
- (void)collectDirectoryAccounts;
- (void)collectSmartGroups;

@end
