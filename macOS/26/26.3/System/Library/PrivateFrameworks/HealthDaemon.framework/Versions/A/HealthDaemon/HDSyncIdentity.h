@class NSUUID, NSString;

@interface HDSyncIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *hardwareIdentifier;
@property (readonly, copy, nonatomic) NSUUID *databaseIdentifier;
@property (readonly, copy, nonatomic) NSString *instanceDiscriminator;

+ (id)legacySyncIdentity;
+ (id)syncIdentityWithCodable:(id)a0 error:(id *)a1;

- (id)codableSyncIdentity;
- (id)description;
- (id)init;
- (id)identityString;
- (id)initWithHardwareIdentifier:(id)a0 databaseIdentifier:(id)a1 instanceDiscriminator:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
