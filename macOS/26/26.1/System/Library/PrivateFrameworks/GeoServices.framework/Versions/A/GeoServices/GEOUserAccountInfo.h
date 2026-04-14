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
+ (BOOL)isPaidAccount;
+ (BOOL)isCurrentICloudAccountUnderage;
+ (BOOL)isCurrentICloudAccountChinaBased;
+ (id)primaryICloudAccount;
+ (BOOL)isCurrentICloudAccountManaged;
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (BOOL)isAccountInfoAvailable;

- (BOOL)isPrimaryICloudAccountPAID;
- (BOOL)isCurrentICloudAccountUnderage;
- (BOOL)isCurrentICloudAccountChinaBased;
- (id)primaryICloudAccount;
- (id)_primaryICloudAccountIsolated;
- (void)_accountStoreDidChange:(id)a0;
- (BOOL)isCurrentICloudAccountManaged;
- (void).cxx_destruct;
- (id)init;

@end
