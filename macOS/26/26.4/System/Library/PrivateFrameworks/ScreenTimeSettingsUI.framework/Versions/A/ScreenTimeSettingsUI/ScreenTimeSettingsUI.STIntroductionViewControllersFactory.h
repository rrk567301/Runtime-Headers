@interface ScreenTimeSettingsUI.STIntroductionViewControllersFactory : NSObject

+ (id)makeOnboardingControllerWithDsid:(id)a0 childAge:(id)a1 childName:(id)a2 isReplacingThirdParty:(BOOL)a3 updateExistingSettings:(BOOL)a4 isCommunicationSafetyAlreadyEnabled:(BOOL)a5 userURI:(id)a6 restrictionsDataSource:(id)a7 restrictionsToPresetMappingViewModel:(id)a8 introductionModel:(id)a9 completionHandler:(id /* block */)a10;

- (id)init;

@end
