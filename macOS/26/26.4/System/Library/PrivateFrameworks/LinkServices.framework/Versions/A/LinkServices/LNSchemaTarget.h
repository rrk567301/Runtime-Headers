@class NSString, LNSchemaVersion;

@interface LNSchemaTarget : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *schemaIdentifier;
@property (readonly, copy, nonatomic) NSString *schemaDomain;
@property (readonly, copy, nonatomic) LNSchemaVersion *version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 schemaIdentifier:(id)a1 schemaDomain:(id)a2 version:(id)a3;

@end
