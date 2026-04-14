@class NSArray;

@interface MFAccountProvider : NSObject <EDAccountsProvider>

@property (readonly, copy, nonatomic) NSArray *receivingAddresses;
@property (readonly, nonatomic) BOOL hasActiveAccounts;

- (id)mailAccounts;

@end
