@class NSPersistentStoreDescription, NSMapTable, NSManagedObjectModel, HMFFuture, NSMutableArray, NSString, NSSet, NSPersistentCloudKitContainer, NSArray, NSPersistentStore, HMFPromise, NSPersistentStoreCoordinator;
@protocol HMDCoreDataNotificationCenter;

@interface HMDCoreData : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<HMDCoreDataNotificationCenter> _notificationCenter;
    NSMutableArray *_listeners;
    NSMapTable *_contexts;
    HMFPromise *_firstCloudKitImportPromise;
}

@property (class, readonly, copy, nonatomic) NSPersistentStoreDescription *cloudPrivateStoreDescription;
@property (class, readonly, copy, nonatomic) NSPersistentStoreDescription *cloudSharedStoreDescription;
@property (class, readonly, copy, nonatomic) NSPersistentStoreDescription *localStoreDescription;
@property (class, readonly, copy, nonatomic) NSPersistentStoreDescription *workingStoreDescription;
@property (class, readonly, copy, nonatomic) NSArray *defaultPersistentStoreDescriptions;
@property (class, readonly, nonatomic) HMDCoreData *sharedInstance;
@property (class, readonly, nonatomic) NSManagedObjectModel *managedObjectModel;

@property (readonly, copy, nonatomic) NSSet *allContexts;
@property (readonly, nonatomic) BOOL firstCloudKitImportComplete;
@property (readonly, nonatomic) HMFFuture *firstCloudKitImportFuture;
@property (readonly, nonatomic) NSPersistentCloudKitContainer *container;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (readonly, nonatomic) NSPersistentStore *workingStore;
@property (readonly, nonatomic) NSPersistentStore *cloudPrivateStore;
@property (readonly, nonatomic) NSPersistentStore *cloudSharedStore;
@property (readonly, nonatomic) NSPersistentStore *localStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)createWithPersistentStoreDescriptions:(id)a0;
+ (id)createWithPersistentStoreDescriptions:(id)a0 notificationCenter:(id)a1;

- (void).cxx_destruct;
- (void)addNotificationListener:(id)a0;
- (void)removeNotificationListener:(id)a0;
- (id)newManagedObjectContext;
- (id)contextWithHomeUUID:(id)a0;
- (id)contextWithRootPartition;
- (void)startWatchingManagedObjectChanges;
- (void)_handleChangeNotification:(id)a0;
- (void)_handlePersistentCloudKitContainerEventChangedNotification:(id)a0;
- (void)_handleWillResetSyncNotification:(id)a0;
- (void)_handleDidResetSyncNotification:(id)a0;
- (void)stopWatchingManagedObjectChanges;

@end
