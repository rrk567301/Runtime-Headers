@class NSString;

@interface CNACAccountProvider : NSObject <CNACAccountProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithAccounts:(id)a0;
+ (id)providerWithStore:(id)a0;

- (id)allAccountTypes;
- (id)accountsWithAccountType:(id)a0;
- (id)childAccountsForAccount:(id)a0;
- (char)isAccountSyncable:(id)a0;
- (char)isAnyAccountSyncableIgnoringAccount:(id)a0;

@end
