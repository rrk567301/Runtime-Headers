@class NSString;

@interface TRIVersionedNamespace : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int compatibilityVersion;

+ (id)versionedNamespaceWithName:(id)a0 compatibilityVersion:(unsigned int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)a0;
- (id)copyWithReplacementName:(id)a0;
- (id)initWithName:(id)a0 compatibilityVersion:(unsigned int)a1;
- (char)isEqualToVersionedNamespace:(id)a0;

@end
