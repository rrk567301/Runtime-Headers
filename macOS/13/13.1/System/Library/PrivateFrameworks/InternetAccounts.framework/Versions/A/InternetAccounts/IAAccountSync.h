@interface IAAccountSync : NSObject

+ (id)getDevices;
+ (void)syncAccounts;
+ (void)accountsChangedExternally;
+ (void)postNotificationForNewAccount:(id)a0 user:(id)a1 pluginID:(id)a2 device:(id)a3;
+ (void)accountWasAddedWithUID:(id)a0 pluginID:(id)a1;
+ (id)newlySyncedAccountUIDs;
+ (id)deletedAccountUIDs;
+ (void)accountWasDeletedWithUID:(id)a0;
+ (void)accountWasDeletedWithUID:(id)a0 mergeData:(BOOL)a1;
+ (void)clearDeletedAccountUIDs;
+ (id)presentedAccountUIDs;
+ (void)accountWasPresentedWithUID:(id)a0;
+ (BOOL)accountSyncCloudStatus;
+ (BOOL)accountSyncisEnabled;

@end
