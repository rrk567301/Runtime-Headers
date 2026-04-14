@class NSManagedObjectContext, NSXPCStoreConnectionInfo, NSPersistentStore;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
    NSPersistentStore *_activeStore;
}

- (id)persistentStoreCoordinator;
- (id)notificationManager;
- (id)initWithConnectionInfo:(id)a0;
- (void)setUserInfo:(id)a0;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)cache;
- (id)managedObjectContext;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (struct { unsigned int x0[8]; })auditToken;
- (id)description;
- (id)entitlements;
- (void)setNotificationManager:(id)a0;
- (void)setManagedObjectContext:(id)a0;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (void)dealloc;
- (BOOL)_allowCoreDataFutures;
- (id)userInfo;

@end
