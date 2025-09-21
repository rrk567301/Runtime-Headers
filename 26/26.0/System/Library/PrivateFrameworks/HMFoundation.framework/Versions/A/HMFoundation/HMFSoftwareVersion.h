@class NSString;

@interface HMFSoftwareVersion : HMFVersion

@property (readonly, copy) NSString *buildVersion;
@property (readonly, copy) NSString *shortVersionString;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isValidVersionString:(id)a0;

- (id)localizedDescription;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)versionString;
- (void).cxx_destruct;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 updateVersion:(unsigned long long)a2;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 updateVersion:(unsigned long long)a2 buildVersion:(id)a3;

@end
