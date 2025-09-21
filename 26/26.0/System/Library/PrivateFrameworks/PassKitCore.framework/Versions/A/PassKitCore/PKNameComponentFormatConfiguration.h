@class PKContactFieldConfiguration;

@interface PKNameComponentFormatConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKContactFieldConfiguration *givenNameFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *familyNameFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *phoneticGivenNameFieldConfiguration;
@property (readonly, nonatomic) PKContactFieldConfiguration *phoneticFamilyNameFieldConfiguration;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
