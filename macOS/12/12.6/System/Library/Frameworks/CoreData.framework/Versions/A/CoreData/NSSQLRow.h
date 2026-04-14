@class _CDSnapshot;

@interface NSSQLRow : NSPersistentCacheRow <NSCopying> {
    _CDSnapshot *_snapshot;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (unsigned int)newBatchRowAllocation:(id *)a0 count:(unsigned int)a1 forSQLEntity:(id)a2 withOwnedObjectIDs:(id *)a3 andTimestamp:(double)a4;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)valueForKey:(id)a0;
- (unsigned long long)version;
- (id)objectID;
- (unsigned int)_versionNumber;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;
- (void)setOptLock:(long long)a0;
- (id)initWithSQLEntity:(id)a0 objectID:(id)a1;
- (id)initWithSQLEntity:(id)a0 ownedObjectID:(id)a1 andTimestamp:(double)a2;
- (id)newObjectIDForToOne:(id)a0;
- (void)setObjectID:(id)a0;
- (void)setForeignKeySlot:(unsigned int)a0 int64:(long long)a1;
- (void)setForeignEntityKeySlot:(unsigned int)a0 entityKey:(unsigned int)a1;
- (void)setForeignOrderKeySlot:(unsigned int)a0 orderKey:(unsigned int)a1;

@end
