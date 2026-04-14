@class NSSQLEntity, NSDictionary, NSData, NSPersistentHistoryTransaction, NSManagedObjectID;

@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding> {
    long long _changeID;
    NSManagedObjectID *_changedObjectID;
    long long _changeType;
    NSDictionary *_tombstone;
    NSPersistentHistoryTransaction *_transaction;
    NSData *_columns;
    NSSQLEntity *_sqlEntity;
    NSManagedObjectID *_backingObjectID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_setTransaction:(id)a0;
- (long long)changeType;
- (id)changedObjectID;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_backingObjectID;
- (id)tombstone;
- (id)initWithManagedObject:(id)a0;
- (id)initWithDictionary:(id)a0 andChangeObjectID:(id)a1;
- (id)updatedProperties;
- (id)transaction;
- (long long)changeID;
- (void)dealloc;

@end
