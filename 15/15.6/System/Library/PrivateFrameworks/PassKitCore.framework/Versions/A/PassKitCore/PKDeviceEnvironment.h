@class NSString;

@interface PKDeviceEnvironment : NSObject

@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *deviceLanguage;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithCountryCode:(id)a0 deviceLanguage:(id)a1;
- (char)localeDiffersFromEnvironment:(id)a0;

@end
