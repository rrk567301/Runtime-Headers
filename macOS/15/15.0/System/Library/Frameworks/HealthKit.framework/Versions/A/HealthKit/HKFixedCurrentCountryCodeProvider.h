@class NSString;

@interface HKFixedCurrentCountryCodeProvider : NSObject <HKCurrentCountryCodeProvider> {
    NSString *_countryCode;
}

- (void).cxx_destruct;
- (id)initWithCountryCode:(id)a0;
- (id)currentCountryCode;

@end
