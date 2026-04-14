@class NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st { unsigned char _readOnly : 1; unsigned char _reservedFlags : 7; } _cd_flags;
    unsigned char _cd_nullFlags_;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)alloc;
+ (void)_entityDeallocated;
+ (Class)classForEntity:(id)a0;
+ (unsigned int)newBatchAllocation:(id *)a0 count:(unsigned int)a1 withOwnedObjectIDs:(id *)a2;
+ (void)_invalidateStaticCaches;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;

@end
