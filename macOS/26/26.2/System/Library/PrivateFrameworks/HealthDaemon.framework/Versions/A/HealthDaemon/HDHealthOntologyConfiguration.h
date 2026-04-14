@class NSArray, NSDictionary;

@interface HDHealthOntologyConfiguration : NSObject {
    NSDictionary *_countryConfigurations;
}

@property (readonly, copy, nonatomic) NSArray *allCountryConfigurations;

+ (id)bundledHealthOntologyConfiguration;

- (id)configurationForCountryCode:(id)a0;
- (void).cxx_destruct;
- (id)initWithCountryConfigurations:(id)a0;
- (id)init;

@end
