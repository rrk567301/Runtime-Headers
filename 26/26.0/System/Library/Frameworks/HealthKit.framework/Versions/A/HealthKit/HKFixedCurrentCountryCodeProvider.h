@class NSString;

@interface HKFixedCurrentCountryCodeProvider : NSObject <HKCurrentCountryCodeProvider> {
    NSString *_countryCode;
}

- (id)initWithCountryCode:(id)a0;
- (id)currentCountryCode;
- (void).cxx_destruct;

@end
