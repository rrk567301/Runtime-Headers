@class NSArray;

@interface _CNACAccountStaticProvider : CNACAccountProvider

@property (readonly, nonatomic) NSArray *accountChildAccountsPairs;

- (void).cxx_destruct;
- (id)accountsWithAccountType:(id)a0;
- (id)allAccountTypes;
- (id)childAccountsForAccount:(id)a0;
- (BOOL)isAccountSyncable:(id)a0;
- (id)initWithAccounts:(id)a0;

@end
