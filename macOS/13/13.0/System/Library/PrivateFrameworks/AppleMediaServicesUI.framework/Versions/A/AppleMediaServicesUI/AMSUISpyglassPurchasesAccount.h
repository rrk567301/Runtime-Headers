@class NSString, ACAccount;

@interface AMSUISpyglassPurchasesAccount : NSObject

@property (retain) ACAccount *account;
@property (readonly) NSString *accountMediaType;
@property (readonly) NSString *bundleID;
@property (readonly) unsigned long long preferredClient;
@property (readonly) NSString *storesTitle;

+ (id)accountWithACAccount:(id)a0 preferredClient:(unsigned long long)a1 andStoresTitle:(id)a2;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 preferredClient:(unsigned long long)a1 andStoresTitle:(id)a2;

@end
