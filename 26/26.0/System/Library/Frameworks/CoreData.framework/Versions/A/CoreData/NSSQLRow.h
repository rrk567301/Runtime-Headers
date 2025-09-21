@interface NSSQLRow : NSPersistentCacheRow <NSCopying> {
    _Atomic id _snapshot;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned int)newBatchRowAllocation:(id *)a0 count:(unsigned int)a1 forSQLEntity:(id)a2 withOwnedObjectIDs:(id *)a3 andTimestamp:(double)a4;

- (void)setObjectID:(id)a0;
- (id)initWithSQLEntity:(id)a0 objectID:(id)a1;
- (void)dealloc;
- (unsigned int)_versionNumber;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)version;
- (id)copy;
- (id)valueForKey:(id)a0;
- (id)initWithSQLEntity:(id)a0 ownedObjectID:(id)a1 andTimestamp:(double)a2;
- (void)setForeignEntityKeySlot:(unsigned int)a0 entityKey:(unsigned int)a1;
- (const id *)knownKeyValuesPointer;
- (void)setForeignKeySlot:(unsigned int)a0 int64:(long long)a1;
- (id)_snapshot_;
- (id)objectID;
- (void)setForeignOrderKeySlot:(unsigned int)a0 orderKey:(unsigned int)a1;
- (id)description;
- (id)newObjectIDForToOne:(id)a0;
- (void)setOptLock:(long long)a0;
- (BOOL)isEqual:(id)a0;

@end
