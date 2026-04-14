@interface NSSQLRow : NSPersistentCacheRow <NSCopying> {
    _Atomic id _snapshot;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned int)newBatchRowAllocation:(id *)a0 count:(unsigned int)a1 forSQLEntity:(id)a2 withOwnedObjectIDs:(id *)a3 andTimestamp:(double)a4;

- (void)setObjectID:(id)a0;
- (void)setOptLock:(long long)a0;
- (id)initWithSQLEntity:(id)a0 objectID:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectID;
- (id)newObjectIDForToOne:(id)a0;
- (id)valueForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (const id *)knownKeyValuesPointer;
- (unsigned int)_versionNumber;
- (id)copy;
- (unsigned long long)version;
- (void)setForeignEntityKeySlot:(unsigned int)a0 entityKey:(unsigned int)a1;
- (id)description;
- (void)setForeignKeySlot:(unsigned int)a0 int64:(long long)a1;
- (id)_snapshot_;
- (void)dealloc;
- (id)initWithSQLEntity:(id)a0 ownedObjectID:(id)a1 andTimestamp:(double)a2;
- (void)setForeignOrderKeySlot:(unsigned int)a0 orderKey:(unsigned int)a1;

@end
