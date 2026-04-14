@class NSDate;

@interface NSPDeviceIdentityCertificate : NSObject <NSSecureCoding, NSCopying> {
    BOOL _ignoreExistingKeychainIdentity;
    long long _diskVersion;
    NSDate *_deviceIdentityFetchDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)deviceSupportsDeviceIdentityWithSerialNumber;
+ (void)removeFromPreferences;
+ (id)sharedDeviceIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fetchDeviceIdentityCertificate:(id /* block */)a0;
- (void)deviceIdentityAuthenticationFailed;
- (void)resetDeviceIdentityInfo;

@end
