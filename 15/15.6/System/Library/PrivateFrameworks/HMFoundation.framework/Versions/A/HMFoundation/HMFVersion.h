@class NSString;

@interface HMFVersion : HMFObject <HMFLogging, HMFLocalizable, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long majorVersion;
@property (readonly) unsigned long long minorVersion;
@property (readonly) unsigned long long updateVersion;
@property (readonly, copy) NSString *versionString;
@property (readonly) struct { long long x0; long long x1; long long x2; } operatingSystemVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *localizedDescription;

+ (id)logCategory;
+ (id)versionFromOperatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (id)versionRegex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithString:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVersionString:(id)a0;
- (char)isEqualToVersion:(id)a0;
- (id)initWithOperatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 updateVersion:(unsigned long long)a2;
- (char)isAtLeastVersion:(id)a0;
- (char)isGreaterThanVersion:(id)a0;

@end
