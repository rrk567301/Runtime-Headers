@class NSSet, NSMutableDictionary, ACAccount, NSObject, ACAccountStore;
@protocol OS_dispatch_queue;

@interface WFManagedConfigurationProfile : NSObject

@property (class, readonly) WFManagedConfigurationProfile *defaultProfile;

@property (readonly) char isOpenInRestrictionInEffect;
@property (readonly) char mayOpenFromUnmanagedToManaged;
@property (readonly) char mayOpenFromManagedToUnmanaged;
@property (readonly, nonatomic) ACAccount *primaryAppleAccount;
@property (readonly) char isWiFiPowerModificationAllowed;
@property (readonly) char isBluetoothModificationAllowed;
@property (readonly) char isWallpaperModificationAllowed;
@property (readonly) char isScreenShotAllowed;
@property (readonly, copy, nonatomic) NSSet *managedAppBundleIDs;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operatingQueue;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) ACAccount *primaryAppleAccount;
@property (readonly, nonatomic) NSMutableDictionary *accounts;
@property (readonly, nonatomic) NSMutableDictionary *accountIdentifiersByDataClass;

- (id)init;
- (void).cxx_destruct;
- (id)accountIdentifiersEnabledForDataclass:(id)a0;
- (id)accountWithIdentifier:(id)a0;
- (id)initWithAccountStore:(id)a0;
- (void)handleAccountStoreDidChangeNotification:(id)a0;
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)a0 originatingAppBundleID:(id)a1 originatingAccountIsManaged:(char)a2;
- (char)isAccountBasedSourceApp:(id)a0;
- (char)isAccountManaged:(id)a0;
- (char)isAppManaged:(id)a0;
- (unsigned long long)managedLevelForContentOfURL:(id)a0;
- (unsigned long long)managedLevelForContentOfURLs:(id)a0;
- (void)removeCachedChildrenAccountForAccount:(id)a0;

@end
