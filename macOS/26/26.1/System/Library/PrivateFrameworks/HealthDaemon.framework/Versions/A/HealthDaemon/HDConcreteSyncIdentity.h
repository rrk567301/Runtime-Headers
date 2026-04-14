@class HDSyncIdentityEntity, HDSyncIdentity;

@interface HDConcreteSyncIdentity : NSObject <NSCopying>

@property (readonly, copy, nonatomic) HDSyncIdentity *identity;
@property (readonly, copy, nonatomic) HDSyncIdentityEntity *entity;
@property (readonly, nonatomic) BOOL isChild;

+ (id)new;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
