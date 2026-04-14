@class NSString;

@interface HMFSoftwareVersion : HMFVersion

@property (readonly, copy) NSString *buildVersion;
@property (readonly, copy) NSString *shortVersionString;

+ (BOOL)isValidVersionString:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (long long)compare:(id)a0;
- (id)localizedDescription;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)versionString;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 updateVersion:(unsigned long long)a2;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 updateVersion:(unsigned long long)a2 buildVersion:(id)a3;

@end
