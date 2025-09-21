@class PKContactFieldConfiguration;

@interface PKAddressFormatConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKContactFieldConfiguration *streetFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *subLocalityFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *cityFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *subAdministrativeAreaFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *stateFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *postalCodeFieldConfiguration;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
