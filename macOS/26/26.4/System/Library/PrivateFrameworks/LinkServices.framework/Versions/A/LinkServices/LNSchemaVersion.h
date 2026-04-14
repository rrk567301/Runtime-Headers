@interface LNSchemaVersion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long major;
@property (readonly, nonatomic) unsigned long long minor;
@property (readonly, nonatomic) unsigned long long patch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 patchVersion:(unsigned long long)a2;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMajorVersion:(unsigned long long)a0;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1;

@end
