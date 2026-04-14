@class _CDSnapshot;

@interface NSSQLRow : NSPersistentCacheRow <NSCopying> {
    _CDSnapshot *_snapshot;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned int)newBatchRowAllocation:(id *)a0 count:(unsigned int)a1 forSQLEntity:(id)a2 withOwnedObjectIDs:(id *)a3 andTimestamp:(double)a4;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueForKey:(id)a0;
- (unsigned long long)version;
- (id)objectID;
- (unsigned int)_versionNumber;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;
- (id)initWithSQLEntity:(id)a0 objectID:(id)a1;
- (id)initWithSQLEntity:(id)a0 ownedObjectID:(id)a1 andTimestamp:(double)a2;
- (id)newObjectIDForToOne:(id)a0;
- (void)setObjectID:(id)a0;
- (void)setForeignKeySlot:(unsigned int)a0 int64:(long long)a1;
- (void)setForeignEntityKeySlot:(unsigned int)a0 entityKey:(unsigned int)a1;
- (void)setForeignOrderKeySlot:(unsigned int)a0 orderKey:(unsigned int)a1;
- (void)setOptLock:(long long)a0;

@end
