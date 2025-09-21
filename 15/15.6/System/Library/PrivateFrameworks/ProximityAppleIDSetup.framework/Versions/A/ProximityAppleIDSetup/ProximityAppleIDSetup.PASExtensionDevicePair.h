@class NSString;

@interface ProximityAppleIDSetup.PASExtensionDevicePair : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ targetDeviceType;
    void /* unknown type, empty encoding */ sourceDeviceBiometryType;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
