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
+ (BOOL)isCurrentICloudAccountManaged;
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (BOOL)isAccountInfoAvailable;
+ (id)primaryICloudAccount;

- (BOOL)isPrimaryICloudAccountPAID;
- (void)_accountStoreDidChange:(id)a0;
- (BOOL)isCurrentICloudAccountUnderage;
- (BOOL)isCurrentICloudAccountChinaBased;
- (id)_primaryICloudAccountIsolated;
- (BOOL)isCurrentICloudAccountManaged;
- (void).cxx_destruct;
- (id)primaryICloudAccount;
- (id)init;

@end
