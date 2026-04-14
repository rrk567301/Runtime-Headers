@class NSNotificationCenter, NSUUID, NSString, HMDHome, HMDPersonResidentSyncManager, NSObject, HMCContext;
@protocol OS_dispatch_queue, HMDPersonCoreDataManagerDelegate, HMDPersonDataSource;

@interface HMDPersonCoreDataManager : HMFObject <HMDPersonResidentSyncManagerDelegate, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *UUID;
@property (weak) HMDHome *home;
@property (copy) NSUUID *userUUID;
@property (readonly) HMCContext *context;
@property (readonly) HMDPersonResidentSyncManager *residentSyncManager;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (weak) id<HMDPersonDataSource> dataSource;
@property (weak) id<HMDPersonCoreDataManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configureWithDataSource:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)persons;
- (BOOL)isRelevantManagedObjectContext:(id)a0;
- (id)personWithUUID:(id)a0;
- (BOOL)shouldDispatchToPrimaryResident;
- (id)addOrUpdateFaceprints:(id)a0 andRemoveFaceprintsWithUUIDs:(id)a1;
- (id)addOrUpdatePersons:(id)a0 andRemovePersonsWithUUIDs:(id)a1;
- (id)deletedFaceprintUUIDsUserInfoKey;
- (id)deletedPersonUUIDsUserInfoKey;
- (void)enumerateFaceprintsForFaceCropsWithUUIDs:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateFaceprintsUsingBlock:(id /* block */)a0;
- (void)enumerateMKFFaceprintsForFaceCropsWithUUIDs:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePersonsUsingBlock:(id /* block */)a0;
- (void)handleManagedObjectContextDidSaveNotification:(id)a0;
- (void)handleManagedObjectContextWillSaveNotification:(id)a0;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 home:(id)a2 userUUID:(id)a3;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 home:(id)a2 userUUID:(id)a3 context:(id)a4 residentSyncManager:(id)a5 notificationCenter:(id)a6;
- (void)insertOrUpdateFaceprintUsingFaceprint:(id)a0;
- (void)insertOrUpdatePersonUsingPerson:(id)a0;
- (BOOL)isRelevantFaceprint:(id)a0;
- (BOOL)isRelevantPerson:(id)a0;
- (id)mkfPersons;
- (id)personModelWithModelID:(id)a0;
- (id)personWithModelID:(id)a0;
- (id)removeAllAssociatedData;
- (id)removeAllAssociatedLocalData;
- (id)removeAllAssociatedSyncedData;

@end
