@class NSString;

@interface UARPComponentVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long majorVersion;
@property (readonly) unsigned long long minorVersion;
@property (readonly) unsigned long long releaseVersion;
@property (readonly) unsigned long long buildVersion;
@property (readonly) BOOL isValid;
@property (readonly) NSString *versionString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isGreaterThan:(id)a0;
- (id)initWithVersionString:(id)a0;
- (id)initWithBVERString:(id)a0;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 releaseVersion:(unsigned long long)a2 buildVersion:(unsigned long long)a3;
- (BOOL)addToVersion:(id)a0;
- (id)initWithMarketingBVERString:(id)a0;
- (id)initWithProjectSourceVersion:(id)a0 projectBuildVersion:(id)a1;
- (id)initWithSimpleBVERString:(id)a0;

@end
