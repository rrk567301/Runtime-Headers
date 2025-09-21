@class DMCObliterationShelter;

@interface DMCReturnToServiceHelper : NSObject

@property (retain, nonatomic) DMCObliterationShelter *obliterationShelter;

+ (id)_userDefaultsToPreserve;
+ (id)preseveReturnToServiceDataWithMDMProfileData:(id)a0 wifiProfileData:(id)a1 additionalDetails:(id)a2 error:(id *)a3;
+ (id)preseveReturnToServiceDataWithMDMProfileData:(id)a0 wifiProfileData:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)localeString;
- (id)languageStrings;
- (void)returnToServiceFlowCompleted;
- (BOOL)shouldDoRapidReturnToService;
- (BOOL)shouldDoReturnToService;

@end
