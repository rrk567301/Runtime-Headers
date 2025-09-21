@class NSString;

@interface PKDeviceEnvironment : NSObject

@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *deviceLanguage;

- (id)_init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCountryCode:(id)a0 deviceLanguage:(id)a1;
- (BOOL)localeDiffersFromEnvironment:(id)a0;

@end
