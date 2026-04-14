@class NSManagedObjectContext, NSXPCStoreConnectionInfo, NSPersistentStore;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
    NSPersistentStore *_activeStore;
}

- (void)setManagedObjectContext:(id)a0;
- (id)managedObjectContext;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)cache;
- (id)notificationManager;
- (id)initWithConnectionInfo:(id)a0;
- (void)setNotificationManager:(id)a0;
- (void)setUserInfo:(id)a0;
- (id)persistentStoreCoordinator;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (struct { unsigned int x0[8]; })auditToken;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)userInfo;
- (id)entitlements;
- (id)description;
- (BOOL)_allowCoreDataFutures;
- (void)dealloc;

@end
