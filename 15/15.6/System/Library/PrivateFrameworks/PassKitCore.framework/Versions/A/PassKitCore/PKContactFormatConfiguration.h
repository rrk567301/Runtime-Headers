@class NSDictionary;

@interface PKContactFormatConfiguration : NSObject <NSSecureCoding> {
    NSDictionary *_regionalAddressFormatConfigurations;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char checkFormatOfPhoneNumber;
@property (readonly, nonatomic) char checkFormatOfEmailAddress;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)contactFieldConfigurationForCountryCode:(id)a0;
- (id)regionalAddressFormatConfigurations;

@end
