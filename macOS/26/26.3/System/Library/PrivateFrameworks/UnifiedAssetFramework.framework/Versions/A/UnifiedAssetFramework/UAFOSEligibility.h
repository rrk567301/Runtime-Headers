@class NSString;

@interface UAFOSEligibility : NSObject

@property (readonly, nonatomic) NSString *gmsLanguage;
@property (readonly, nonatomic) NSString *siriLanguage;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_eligibilityCountryPolicyStringIsChina:(const char *)a0;
- (BOOL)_updateCountryPolicy:(id)a0;
- (BOOL)_updateDeviceLanguage:(id)a0;
- (BOOL)_updateEligibilityData;
- (BOOL)_updateSiriLanguage:(id)a0;

@end
