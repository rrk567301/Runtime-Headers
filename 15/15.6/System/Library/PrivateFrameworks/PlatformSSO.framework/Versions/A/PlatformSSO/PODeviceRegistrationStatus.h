@class NSString;

@interface PODeviceRegistrationStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isPlatformSSOEnabled) char platformSSOEnabled;
@property (retain, nonatomic) NSString *registeredExtensionName;
@property (retain, nonatomic) NSString *accountName;
@property (retain, nonatomic) NSString *registeredBundleIdentifier;
@property (nonatomic) long long deviceRegistrationStatus;
@property (nonatomic, getter=isActionButtonEnabled) char actionButtonEnabled;
@property (nonatomic) long long actionButtonAction;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
