@class NSArray;

@interface MFAccountProvider : NSObject <EDAccountsProvider>

@property (readonly, copy, nonatomic) NSArray *receivingAddresses;

- (id)mailAccounts;

@end
