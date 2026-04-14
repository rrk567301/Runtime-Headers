@class NSDictionary, NSUUID;

@interface HKDeletedObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *metadata;
@property (nonatomic) long long externalSyncObjectCode;
@property (readonly) NSUUID *UUID;

+ (id)_deletedObjectWithUUID:(id)a0 metadata:(id)a1;
+ (id)_metadataWithSyncIdentifier:(id)a0 syncVersion:(id)a1;

- (id)description;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
