@class geo_isolater, ACAccountStore, ACAccount;

@interface GEOUserAccountInfo : NSObject {
    geo_isolater *_isolation;
    ACAccountStore *_accountStore;
    BOOL _hasCheckedPrimaryAccount;
    ACAccount *_primaryICloudAccount;
    BOOL _hasCheckedPrimaryAuthKitAccount;
    ACAccount *_primaryAuthKitAccount;
}

+ (id)sharedInstance;
+ (BOOL)isAccountInfoAvailable;
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (BOOL)isCurrentICloudAccountUnderage;
+ (BOOL)isCurrentICloudAccountChinaBased;
+ (BOOL)isCurrentICloudAccountManaged;
+ (id)primaryICloudAccount;

- (id)init;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)a0;
- (BOOL)isCurrentICloudAccountUnderage;
- (BOOL)isCurrentICloudAccountChinaBased;
- (BOOL)isCurrentICloudAccountManaged;
- (id)primaryICloudAccount;
- (id)_primaryICloudAccountIsolated;

@end
