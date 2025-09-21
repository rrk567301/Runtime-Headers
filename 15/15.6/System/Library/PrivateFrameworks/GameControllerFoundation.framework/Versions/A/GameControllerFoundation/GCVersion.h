@interface GCVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long major;
@property (readonly) unsigned long long minor;
@property (readonly) unsigned long long patch;

+ (id)currentSourceVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithString:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (char)isEqualTo:(id)a0;
- (char)isGreaterThan:(id)a0;
- (char)isGreaterThanOrEqualTo:(id)a0;
- (char)isLessThan:(id)a0;
- (char)isLessThanOrEqualTo:(id)a0;
- (id)initWithMajor:(unsigned long long)a0 minor:(unsigned long long)a1 patch:(unsigned long long)a2;
- (char)isEqualToSourceVersion:(id)a0;
- (char)isGreaterThanOrEqualToSourceVersion:(id)a0;
- (char)isGreaterThanSourceVersion:(id)a0;
- (char)isLessThanOrEqualToSourceVersion:(id)a0;
- (char)isLessThanSourceVersion:(id)a0;

@end
