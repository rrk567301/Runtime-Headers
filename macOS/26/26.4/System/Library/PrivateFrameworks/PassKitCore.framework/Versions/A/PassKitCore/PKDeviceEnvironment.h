@class NSString;

@interface PKDeviceEnvironment : NSObject

@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *deviceLanguage;

- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCountryCode:(id)a0 deviceLanguage:(id)a1;
- (BOOL)localeDiffersFromEnvironment:(id)a0;

@end
