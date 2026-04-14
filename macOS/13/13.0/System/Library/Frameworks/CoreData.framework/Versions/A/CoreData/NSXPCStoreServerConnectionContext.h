@class NSManagedObjectContext, NSXPCStoreConnectionInfo;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
}

- (void)dealloc;
- (id)description;
- (id)userInfo;
- (struct { unsigned int x0[8]; })auditToken;
- (id)entitlements;
- (void)setUserInfo:(id)a0;
- (id)persistentStoreCoordinator;
- (void)setManagedObjectContext:(id)a0;
- (id)managedObjectContext;
- (id)cache;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (BOOL)_allowCoreDataFutures;
- (id)initWithConnectionInfo:(id)a0;
- (id)notificationManager;
- (void)setNotificationManager:(id)a0;

@end
