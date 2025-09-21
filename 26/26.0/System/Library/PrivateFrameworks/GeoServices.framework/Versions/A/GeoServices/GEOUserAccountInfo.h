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
+ (BOOL)isPaidAccount;
+ (BOOL)isCurrentICloudAccountUnderage;
+ (BOOL)isCurrentICloudAccountChinaBased;
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (BOOL)isCurrentICloudAccountManaged;
+ (id)primaryICloudAccount;

- (void)_accountStoreDidChange:(id)a0;
- (id)_primaryICloudAccountIsolated;
- (BOOL)isCurrentICloudAccountUnderage;
- (id)init;
- (BOOL)isCurrentICloudAccountChinaBased;
- (BOOL)isCurrentICloudAccountManaged;
- (BOOL)isPrimaryICloudAccountPAID;
- (void).cxx_destruct;
- (id)primaryICloudAccount;

@end
