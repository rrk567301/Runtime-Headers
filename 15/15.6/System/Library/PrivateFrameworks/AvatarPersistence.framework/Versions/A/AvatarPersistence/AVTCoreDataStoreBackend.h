@class NSString;
@protocol AVTAvatarRecordChangeTracker, AVTStoreBackendDelegate, AVTCoreDataPersistentStoreConfiguration, AVTAvatarManagedRecordTransformer, AVTUILogger, AVTCoreDataRemoteChangesObserver;

@interface AVTCoreDataStoreBackend : NSObject <AVTStoreBackend>

@property (readonly, nonatomic) id<AVTCoreDataPersistentStoreConfiguration> configuration;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) id<AVTAvatarManagedRecordTransformer> recordTransformer;
@property (readonly, nonatomic) id<AVTCoreDataRemoteChangesObserver> remoteChangesObserver;
@property (readonly, nonatomic) NSString *localProcessName;
@property (weak, nonatomic) id<AVTStoreBackendDelegate> backendDelegate;
@property (readonly, nonatomic) id<AVTAvatarRecordChangeTracker> recordChangeTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cdFetchRequestForAvatarFetchRequest:(id)a0 recordTransformer:(id)a1;
+ (id)cdFetchRequestWithPredicate:(id)a0 fetchLimit:(long long)a1;
+ (id)cdFetchRequestWithPredicate:(id)a0 fetchLimit:(long long)a1 ascending:(char)a2;
+ (char)fetchRequestCriteriaSupported:(long long)a0;

- (void).cxx_destruct;
- (id)avatarsForFetchRequest:(id)a0 error:(id *)a1;
- (id)initWithConfiguration:(id)a0 environment:(id)a1;
- (char)canCreateAvatarWithError:(id *)a0;
- (void)startObservingChangesIfNeeded;
- (id)newManagedObjectContext;
- (void)contentDidChangeWithIdentifiers:(id)a0;
- (char)deleteAvatarWithIdentifier:(id)a0 error:(id *)a1;
- (id)duplicateAvatarRecord:(id)a0 error:(id *)a1;
- (void)getChangedObjectIDsOfInterest:(id *)a0 deletedIdentifiers:(id *)a1 forTransactions:(id)a2;
- (id)initWithConfiguration:(id)a0 recordTransformer:(id)a1 remoteChangesObserver:(id)a2 localProcessName:(id)a3 recordChangeTracker:(id)a4 environment:(id)a5;
- (unsigned long long)nts_avatarCountWithManagedObjectContext:(id)a0 error:(id *)a1;
- (char)nts_saveManagedObjectContext:(id)a0 error:(id *)a1;
- (void)performWorkWithManagedObjectContext:(id /* block */)a0;
- (id)recordIdentifiersForManagedObjectIDs:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
- (char)saveAvatar:(id)a0 error:(id *)a1;
- (char)saveAvatars:(id)a0 error:(id *)a1;
- (char)setupStoreIfNeeded:(id *)a0;

@end
