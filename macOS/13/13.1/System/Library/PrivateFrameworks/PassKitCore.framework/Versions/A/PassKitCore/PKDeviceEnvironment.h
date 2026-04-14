@class NSString;

@interface PKDeviceEnvironment : NSObject

@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *deviceLanguage;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithCountryCode:(id)a0 deviceLanguage:(id)a1;
- (BOOL)localeDiffersFromEnvironment:(id)a0;

@end
