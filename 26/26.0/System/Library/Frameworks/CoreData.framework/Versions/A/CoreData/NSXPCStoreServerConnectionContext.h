@class NSManagedObjectContext, NSXPCStoreConnectionInfo, NSPersistentStore;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
    NSPersistentStore *_activeStore;
}

- (id)persistentStoreCoordinator;
- (void)setManagedObjectContext:(id)a0;
- (id)notificationManager;
- (id)managedObjectContext;
- (id)cache;
- (BOOL)_allowCoreDataFutures;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)dealloc;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)entitlements;
- (struct { unsigned int x0[8]; })auditToken;
- (id)description;
- (void)setUserInfo:(id)a0;
- (id)userInfo;
- (id)initWithConnectionInfo:(id)a0;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)setNotificationManager:(id)a0;

@end
