@class HDSyncIdentityEntity, HDSyncIdentity;

@interface HDConcreteSyncIdentity : NSObject <NSCopying>

@property (readonly, copy, nonatomic) HDSyncIdentity *identity;
@property (readonly, copy, nonatomic) HDSyncIdentityEntity *entity;
@property (readonly, nonatomic) BOOL isChild;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
