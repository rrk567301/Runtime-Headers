@interface ICQDaemonPlanRecommendation : NSObject

+ (void)calculateExtraQuotaNeededToSyncForAccountWithID:(id)a0 isAccountFull:(char)a1 completion:(id /* block */)a2;
+ (id)accountForID:(id)a0;
+ (long long)calculateExtraQuotaNeededToSyncWithBackupSize:(long long)a0;
+ (id)fullBackupSize;
+ (void)getLocalPhotoLibrarySizeWithCompletion:(id /* block */)a0;
+ (char)isBackupEnabledForAccount:(id)a0;
+ (char)isICPLEnabledForAccount:(id)a0;
+ (char)isPhotosLibraryIncludedInBackupForAccount:(id)a0;

@end
