@class NSNumber, NSString;

@interface OBCapabilities : NSObject

@property (retain, nonatomic) NSNumber *overrideDeviceSupportsGenerativeModels;
@property (retain, nonatomic) NSNumber *overrideEligibleForChlorine;
@property (retain, nonatomic) NSNumber *overrideEligibilityForGreymatterHasCountryPolicyChina;
@property (retain, nonatomic) NSString *overrideAdditionalDisplayLanguage;
@property (nonatomic) char preventURLDataDetection;
@property (nonatomic) char preventOpeningSafari;

+ (id)sharedCapabilities;

- (void).cxx_destruct;
- (char)isWAPI;
- (char)_eligibilityContextHasCountryPolicyChina:(id)a0;
- (char)_eligibilityCountryPolicyStringIsChina:(const char *)a0;
- (id)_potentialAdditionalDisplayLanguage;
- (id)additionalDisplayLanguageForDisplayLanguage:(id)a0;
- (char)deviceSupportsGenerativeModels;
- (char)eligibilityForGreymatterHasCountryPolicyChina;
- (char)eligibleForChlorine;

@end
