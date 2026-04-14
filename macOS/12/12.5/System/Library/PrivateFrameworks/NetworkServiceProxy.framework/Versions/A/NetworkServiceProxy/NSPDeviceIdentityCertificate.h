@class NSDate;

@interface NSPDeviceIdentityCertificate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long diskVersion;
@property (nonatomic) BOOL ignoreExistingKeychainIdentity;
@property (retain, nonatomic) NSDate *deviceIdentityFetchDate;

+ (BOOL)deviceHasEOS;
+ (void)removeFromPreferences;
+ (BOOL)deviceSupportsDeviceIdentityWithSerialNumber;
+ (id)sharedDeviceIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initFromPreferences;
- (BOOL)saveToPreferences;
- (void)generateDeviceIdentityFetchDate;
- (void)resetDeviceIdentityInfo;
- (void)deviceIdentityAuthenticationFailed;
- (void)fetchDeviceIdentityCertificate:(id /* block */)a0;

@end
