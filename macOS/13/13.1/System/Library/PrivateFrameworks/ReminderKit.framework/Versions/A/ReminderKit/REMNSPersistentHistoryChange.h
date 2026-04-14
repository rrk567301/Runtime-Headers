@class NSPersistentHistoryChange, NSArray, REMChangeTransaction, REMObjectID, _REMNSPersistentHistoryChangeStorage;

@interface REMNSPersistentHistoryChange : REMChangeObject

@property (retain) _REMNSPersistentHistoryChangeStorage *storage;
@property (readonly, weak) NSPersistentHistoryChange *persistentHistoryChange;
@property (retain) REMObjectID *cachedChangedREMObjectID;
@property (weak, nonatomic) REMChangeTransaction *internal_ChangeTransaction;
@property (nonatomic) BOOL isCoalesced;
@property (retain, nonatomic) NSArray *coalescedChanges;

+ (BOOL)supportsSecureCoding;
+ (id)shortStringForChangeType:(long long)a0;
+ (id)stringForChangeType:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)changeType;
- (id)tombstone;
- (id)changedObjectID;
- (id)transaction;
- (long long)changeID;
- (id)updatedProperties;
- (id)initWithStorage:(id)a0;
- (id)initWithPersistentHistoryChange:(id)a0;
- (id)changedManagedObjectID;
- (void)resolveObjectIDWithUUID:(id)a0 entityName:(id)a1;
- (id)copyForCoalescing;

@end
