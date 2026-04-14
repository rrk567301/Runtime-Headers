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
+ (BOOL)isCurrentICloudAccountManaged;
+ (id)primaryICloudAccount;
+ (BOOL)isCurrentICloudAccountChinaBased;
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (BOOL)isCurrentICloudAccountUnderage;
+ (BOOL)isPaidAccount;

- (BOOL)isCurrentICloudAccountManaged;
- (void)_accountStoreDidChange:(id)a0;
- (BOOL)isPrimaryICloudAccountPAID;
- (id)primaryICloudAccount;
- (id)_primaryICloudAccountIsolated;
- (void).cxx_destruct;
- (BOOL)isCurrentICloudAccountChinaBased;
- (id)init;
- (BOOL)isCurrentICloudAccountUnderage;

@end
