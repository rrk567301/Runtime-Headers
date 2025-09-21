@class _REMNSPersistentHistoryChangeStorage, NSArray, REMChangeTransaction, REMObjectID, NSManagedObjectID;

@interface REMNSPersistentHistoryChange : REMChangeObject

@property (retain) _REMNSPersistentHistoryChangeStorage *storage;
@property (readonly) NSManagedObjectID *persistentHistoryChangeObjectID;
@property (retain) REMObjectID *cachedChangedREMObjectID;
@property (weak, nonatomic) REMChangeTransaction *internal_ChangeTransaction;
@property (nonatomic) BOOL isCoalesced;
@property (retain, nonatomic) NSArray *coalescedChanges;

+ (BOOL)supportsSecureCoding;
+ (id)stringForChangeType:(long long)a0;
+ (id)shortStringForChangeType:(long long)a0;

- (id)transaction;
- (id)changedObjectID;
- (id)initWithStorage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)changeType;
- (long long)changeID;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)updatedProperties;
- (id)tombstone;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)changedManagedObjectID;
- (id)copyForCoalescing;
- (id)initWithPersistentHistoryChange:(id)a0;
- (void)resolveObjectIDWithUUID:(id)a0 entityName:(id)a1;

@end
