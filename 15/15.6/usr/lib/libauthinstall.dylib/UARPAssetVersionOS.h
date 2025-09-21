@class NSString;

@interface UARPAssetVersionOS : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long majorVersion;
@property (readonly) unsigned long long minorVersion;
@property (readonly) unsigned long long releaseVersion;
@property (readonly) unsigned long long buildVersion;
@property (readonly) char isValid;
@property (readonly) NSString *versionString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVersionString:(id)a0;
- (id)initWithBVERString:(id)a0;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 releaseVersion:(unsigned long long)a2 buildVersion:(unsigned long long)a3;

@end
