@class NSString;

@interface VSDeveloperSettings : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isInSetTopBoxMode;
@property (nonatomic) char cacheBusterEnabled;
@property (nonatomic) char requestTimeoutsDisabled;
@property (nonatomic) char simulateExpiredToken;
@property (copy, nonatomic) NSString *setTopBoxBundleIdentifier;
@property (copy, nonatomic) NSString *setTopBoxUserToken;
@property (copy, nonatomic) NSString *setTopBoxIdentityProviderID;
@property (nonatomic) char setTopBoxUseDeviceProfile;
@property (nonatomic) char setTopBoxSupportsOptOut;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setDefaults;

@end
