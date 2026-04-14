@class NSDate;

@interface NSPDeviceIdentityCertificate : NSObject <NSSecureCoding, NSCopying> {
    BOOL _ignoreExistingKeychainIdentity;
    long long _diskVersion;
    NSDate *_deviceIdentityFetchDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)removeFromPreferences;
+ (BOOL)deviceSupportsDeviceIdentityWithSerialNumber;
+ (id)sharedDeviceIdentity;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)resetDeviceIdentityInfo;
- (void)deviceIdentityAuthenticationFailed;
- (void)fetchDeviceIdentityCertificate:(id /* block */)a0;

@end
