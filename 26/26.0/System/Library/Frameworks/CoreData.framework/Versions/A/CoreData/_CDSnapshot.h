@class NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st { unsigned char _readOnly : 1; unsigned char _reservedFlags : 7; } _cd_flags;
    unsigned char _cd_nullFlags_;
}

+ (id)alloc;
+ (void)_invalidateStaticCaches;
+ (void)initialize;
+ (Class)classForEntity:(id)a0;
+ (unsigned int)newBatchAllocation:(id *)a0 count:(unsigned int)a1 withOwnedObjectIDs:(id *)a2;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)_entityDeallocated;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)valueForKey:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (void)setValue:(id)a0 forKey:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
