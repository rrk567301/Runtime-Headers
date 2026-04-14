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
+ (id)primaryICloudAccount;
+ (BOOL)isCurrentICloudAccountChinaBased;
+ (BOOL)isAccountInfoAvailable;
+ (BOOL)isCurrentICloudAccountUnderage;
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (BOOL)isCurrentICloudAccountManaged;
+ (BOOL)isPaidAccount;

- (id)primaryICloudAccount;
- (BOOL)isCurrentICloudAccountChinaBased;
- (id)init;
- (BOOL)isPrimaryICloudAccountPAID;
- (BOOL)isCurrentICloudAccountUnderage;
- (void)_accountStoreDidChange:(id)a0;
- (BOOL)isCurrentICloudAccountManaged;
- (void).cxx_destruct;
- (id)_primaryICloudAccountIsolated;

@end
