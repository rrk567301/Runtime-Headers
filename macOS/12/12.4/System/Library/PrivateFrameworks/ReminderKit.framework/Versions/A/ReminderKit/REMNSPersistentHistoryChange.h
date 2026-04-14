@class NSPersistentHistoryChange, NSArray, REMChangeTransaction, _REMNSPersistentHistoryChangeStorage;

@interface REMNSPersistentHistoryChange : REMChangeObject

@property (retain) _REMNSPersistentHistoryChangeStorage *storage;
@property (readonly, weak) NSPersistentHistoryChange *persistentHistoryChange;
@property (weak, nonatomic) REMChangeTransaction *internal_ChangeTransaction;
@property (nonatomic) BOOL isCoalesced;
@property (retain, nonatomic) NSArray *coalescedChanges;

+ (BOOL)supportsSecureCoding;
+ (id)stringForChangeType:(long long)a0;
+ (id)shortStringForChangeType:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)changeType;
- (id)changedObjectID;
- (id)tombstone;
- (id)transaction;
- (id)updatedProperties;
- (long long)changeID;
- (id)initWithStorage:(id)a0;
- (id)initWithPersistentHistoryChange:(id)a0;
- (id)changedManagedObjectID;
- (void)resolveWithObjectID:(id)a0;
- (id)copyForCoalescing;

@end
