@interface MFEWSActivityFactory : NSObject

+ (id)newBackgroundBodyFetchTaskWithAccountName:(id)a0;
+ (id)newVisibleBodyFetchTaskWithAccountName:(id)a0;
+ (id)newMailboxSyncTaskForMailbox:(id)a0;
+ (id)newFolderHierarchyReconcileTaskWithInitialSyncState:(id)a0 accountName:(id)a1;
+ (id)newRetrievePersistedFolderDataTaskWithMailboxDataCache:(id)a0 accountName:(id)a1;

@end
