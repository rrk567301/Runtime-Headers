@class NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
    int _cd_rc;
    int _cd_version;
    NSManagedObjectID *_cd_objectID;
    struct _snapshotFlags_st { unsigned char _readOnly : 1; unsigned char _reservedFlags : 7; } _cd_flags;
    unsigned char _cd_nullFlags_;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (unsigned int)newBatchAllocation:(id *)a0 count:(unsigned int)a1 withOwnedObjectIDs:(id *)a2;
+ (void)_invalidateStaticCaches;
+ (void)_entityDeallocated;
+ (Class)classForEntity:(id)a0;

- (id)copy;
- (id)mutableCopy;
- (id)description;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
