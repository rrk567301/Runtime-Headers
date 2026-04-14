@interface SMEngineStepHelper : NSObject

+ (id)generateMachineSettingsStep:(id)a0 onlyUpdateSystemSettings:(BOOL)a1;
+ (id)generateStepsForEngineForMac:(id)a0 mustGenerateUserStep:(BOOL)a1 mustGenerateMachineSettingsStep:(BOOL)a2 mustGenerateAppsFileStep:(BOOL)a3;
+ (id)generateStepsForEngineForWindows:(id)a0 mustGenerateUserStep:(BOOL)a1 mustGenerateEnterpriseFilesStep:(BOOL)a2;
+ (void)sortStepsAccordingToOrder:(id)a0;

@end
