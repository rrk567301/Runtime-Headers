@class NSManagedObjectContext, NSXPCStoreConnectionInfo, NSPersistentStore;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
    NSPersistentStore *_activeStore;
}

- (id)notificationManager;
- (id)managedObjectContext;
- (id)initWithConnectionInfo:(id)a0;
- (void)setNotificationManager:(id)a0;
- (id)cache;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (struct { unsigned int x0[8]; })auditToken;
- (id)persistentStoreCoordinator;
- (id)entitlements;
- (void)setUserInfo:(id)a0;
- (id)userInfo;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)description;
- (BOOL)_allowCoreDataFutures;
- (void)setManagedObjectContext:(id)a0;
- (void)dealloc;

@end
