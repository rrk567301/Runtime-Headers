@class geo_isolater, ACAccountStore, ACAccount;

@interface GEOUserAccountInfo : NSObject {
    geo_isolater *_isolation;
    ACAccountStore *_accountStore;
    char _hasCheckedPrimaryAccount;
    ACAccount *_primaryICloudAccount;
    char _hasCheckedPrimaryAuthKitAccount;
    ACAccount *_primaryAuthKitAccount;
}

+ (id)sharedInstance;
+ (char)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (char)isAccountInfoAvailable;
+ (char)isCurrentICloudAccountChinaBased;
+ (char)isCurrentICloudAccountManaged;
+ (char)isCurrentICloudAccountUnderage;
+ (char)isPaidAccount;
+ (id)primaryICloudAccount;

- (id)init;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)a0;
- (id)_primaryICloudAccountIsolated;
- (char)isCurrentICloudAccountChinaBased;
- (char)isCurrentICloudAccountManaged;
- (char)isCurrentICloudAccountUnderage;
- (char)isPrimaryICloudAccountPAID;
- (id)primaryICloudAccount;

@end
