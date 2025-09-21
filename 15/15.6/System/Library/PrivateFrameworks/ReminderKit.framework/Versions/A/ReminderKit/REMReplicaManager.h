@class NSMutableDictionary, NSMutableOrderedSet;

@interface REMReplicaManager : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ivarLock;
@property (nonatomic) char isPersistable;
@property (retain, nonatomic) NSMutableOrderedSet *replicaUUIDs;
@property (retain, nonatomic) NSMutableDictionary *replicaEntries;
@property (nonatomic) unsigned long long currentVersion;
@property (nonatomic) unsigned long long maxLastSavedVersion;
@property (nonatomic) char exceededMaxSerializedSize;

+ (char)supportsSecureCoding;
+ (void)setReplicaManager:(id)a0 forAccountID:(id)a1;
+ (char)disablesInMemoryOnlyCheck;
+ (id)replicaManagerForAccountID:(id)a0 store:(id)a1;
+ (id)replicaManagerIfLoadedForAccountID:(id)a0;
+ (id)replicaManagerWithSerializedData:(id)a0 error:(id *)a1;
+ (void)setDisablesInMemoryOnlyCheck:(char)a0;
+ (char)shouldUseNewInMemoryOnlyReplicaManager;
+ (id)unsavedReplicaManagersForAccountIDs:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (char)hasUnsavedChanges;
- (id)initWithArchive:(const void *)a0 error:(id *)a1;
- (void)didSaveVersion:(unsigned long long)a0;
- (id)l_checkoutReplicaUUIDForClient:(id)a0;
- (void)addRandomReplicaEntriesWithCount:(long long)a0;
- (id)availabilityOfFirstReplicaForCRDTID:(id)a0;
- (id)checkoutReplicaUUIDForClient:(id)a0;
- (id)clockOfFirstReplicaForCRDTID:(id)a0;
- (void)encodeIntoArchive:(void *)a0;
- (char)hasEqualPersistedEntriesAs:(id)a0;
- (id)l_replicaEntriesDescriptionForPersistence:(char)a0;
- (id)l_replicaUUIDsDescription;
- (id)l_serializedDataWithError:(id *)a0;
- (char)l_updateVersionOfEntry:(id)a0 forClient:(id)a1;
- (void)modifyReplicaEntryForClient:(id)a0 block:(id /* block */)a1;
- (void)performLocked:(id /* block */)a0;
- (id)persistenceDescription;
- (unsigned long long)replicaEntryCount;
- (void)returnReplicaForClient:(id)a0;
- (id)serializedDataCappedAtMaxSize:(char)a0 error:(id *)a1;
- (void)updateVersionForClient:(id)a0;

@end
