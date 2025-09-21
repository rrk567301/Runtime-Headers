@class PKNameComponentFormatConfiguration, PKAddressFormatConfiguration;

@interface PKRegionalContactFormatConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKNameComponentFormatConfiguration *nameComponentFormatConfiguration;
@property (readonly, nonatomic) PKAddressFormatConfiguration *addressFormatConfiguration;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
