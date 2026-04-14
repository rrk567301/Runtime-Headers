@interface MFEWSActivityFactory : NSObject

+ (id)newFolderHierarchyReconcileTaskWithInitialSyncState:(id)a0 accountName:(id)a1;
+ (id)newMailboxSyncTaskForMailbox:(id)a0;
+ (id)newRetrievePersistedFolderDataTaskWithMailboxDataCache:(id)a0 accountName:(id)a1;
+ (id)newBackgroundBodyFetchTaskWithAccountName:(id)a0;
+ (id)newVisibleBodyFetchTaskWithAccountName:(id)a0;

@end
