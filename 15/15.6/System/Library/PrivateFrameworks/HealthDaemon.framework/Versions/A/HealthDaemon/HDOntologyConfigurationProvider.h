@class NSSet, HDHealthOntologyConfiguration, HDProfile;

@interface HDOntologyConfigurationProvider : NSObject {
    HDHealthOntologyConfiguration *_ontologyConfiguration;
}

@property (retain, nonatomic) HDHealthOntologyConfiguration *unitTesting_ontologyConfigurationOverride;
@property (readonly, copy, nonatomic) NSSet *allSupportedCountryCodes;
@property (readonly, copy, nonatomic) NSSet *improveHealthRecordsGatedAnalyticsEnabledCountryCodes;
@property (readonly, copy, nonatomic) NSSet *optInDataCollectionEnabledCountryCodes;
@property (readonly, weak, nonatomic) HDProfile *profile;

- (id)init;
- (void).cxx_destruct;
- (char)isCountryCodeSupported:(id)a0;
- (char)isCountrySupported:(id)a0;
- (id)ontologyConfigurationForCountryCode:(id)a0;

@end
