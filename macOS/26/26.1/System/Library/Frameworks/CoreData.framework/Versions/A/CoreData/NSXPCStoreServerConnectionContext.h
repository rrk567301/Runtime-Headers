@class NSManagedObjectContext, NSXPCStoreConnectionInfo, NSPersistentStore;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
    NSPersistentStore *_activeStore;
}

- (id)managedObjectContext;
- (id)entitlements;
- (id)persistentStoreCoordinator;
- (void)setManagedObjectContext:(id)a0;
- (void)setUserInfo:(id)a0;
- (id)initWithConnectionInfo:(id)a0;
- (id)userInfo;
- (id)cache;
- (id)notificationManager;
- (struct { unsigned int x0[8]; })auditToken;
- (void)setNotificationManager:(id)a0;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)description;
- (void)dealloc;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (BOOL)_allowCoreDataFutures;

@end
