@class NSString;

@interface TRIVersionedNamespace : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int compatibilityVersion;

+ (id)versionedNamespaceWithName:(id)a0 compatibilityVersion:(unsigned int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)a0;
- (id)init;
- (id)copyWithReplacementName:(id)a0;
- (id)userFacingString;
- (id)description;
- (id)initWithName:(id)a0 compatibilityVersion:(unsigned int)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToVersionedNamespace:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
