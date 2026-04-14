@class NSManagedObjectContext, NSXPCStoreConnectionInfo;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
}

- (void)dealloc;
- (id)description;
- (id)userInfo;
- (id)entitlements;
- (struct { unsigned int x0[8]; })auditToken;
- (void)setUserInfo:(id)a0;
- (void)setManagedObjectContext:(id)a0;
- (id)managedObjectContext;
- (id)persistentStoreCoordinator;
- (id)cache;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (BOOL)_allowCoreDataFutures;
- (id)initWithConnectionInfo:(id)a0;
- (id)notificationManager;
- (void)setNotificationManager:(id)a0;

@end
