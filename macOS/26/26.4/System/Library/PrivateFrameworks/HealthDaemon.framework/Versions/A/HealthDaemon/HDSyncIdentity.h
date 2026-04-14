@class NSUUID, NSString;

@interface HDSyncIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *hardwareIdentifier;
@property (readonly, copy, nonatomic) NSUUID *databaseIdentifier;
@property (readonly, copy, nonatomic) NSString *instanceDiscriminator;

+ (id)legacySyncIdentity;
+ (id)syncIdentityWithCodable:(id)a0 error:(id *)a1;

- (id)identityString;
- (id)codableSyncIdentity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithHardwareIdentifier:(id)a0 databaseIdentifier:(id)a1 instanceDiscriminator:(id)a2;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
