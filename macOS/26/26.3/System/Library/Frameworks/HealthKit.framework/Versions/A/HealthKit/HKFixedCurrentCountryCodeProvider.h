@class NSString;

@interface HKFixedCurrentCountryCodeProvider : NSObject <HKCurrentCountryCodeProvider> {
    NSString *_countryCode;
}

- (id)currentCountryCode;
- (void).cxx_destruct;
- (id)initWithCountryCode:(id)a0;

@end
