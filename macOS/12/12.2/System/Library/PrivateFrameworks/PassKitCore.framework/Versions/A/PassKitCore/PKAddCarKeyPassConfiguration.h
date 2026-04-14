@class NSString;

@interface PKAddCarKeyPassConfiguration : PKAddSecureElementPassConfiguration

@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) unsigned long long supportedRadioTechnologies;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
