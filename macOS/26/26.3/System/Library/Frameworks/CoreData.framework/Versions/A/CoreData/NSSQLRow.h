@interface NSSQLRow : NSPersistentCacheRow <NSCopying> {
    _Atomic id _snapshot;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (unsigned int)newBatchRowAllocation:(id *)a0 count:(unsigned int)a1 forSQLEntity:(id)a2 withOwnedObjectIDs:(id *)a3 andTimestamp:(double)a4;

- (id)copy;
- (id)_snapshot_;
- (const id *)knownKeyValuesPointer;
- (void)setForeignOrderKeySlot:(unsigned int)a0 orderKey:(unsigned int)a1;
- (void)setObjectID:(id)a0;
- (id)initWithSQLEntity:(id)a0 objectID:(id)a1;
- (id)description;
- (id)objectID;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (void)setForeignEntityKeySlot:(unsigned int)a0 entityKey:(unsigned int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setForeignKeySlot:(unsigned int)a0 int64:(long long)a1;
- (unsigned int)_versionNumber;
- (BOOL)isEqual:(id)a0;
- (void)setOptLock:(long long)a0;
- (id)initWithSQLEntity:(id)a0 ownedObjectID:(id)a1 andTimestamp:(double)a2;
- (unsigned long long)version;
- (id)newObjectIDForToOne:(id)a0;

@end
