@class PKNameComponentFormatConfiguration, PKAddressFormatConfiguration;

@interface PKRegionalContactFormatConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKNameComponentFormatConfiguration *nameComponentFormatConfiguration;
@property (readonly, nonatomic) PKAddressFormatConfiguration *addressFormatConfiguration;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
