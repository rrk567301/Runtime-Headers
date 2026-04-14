@interface TRIUserAdjustableSettings : NSObject

+ (void)updateExperimentOptOutStateWithServerContext:(id)a0;
+ (BOOL)getExperimentOptOut:(id)a0;
+ (void)_deactivateAllActiveExperimentsWithServerContext:(id)a0;
+ (unsigned char)_optOutSoftwareUpdatePreferenceForAnyUser;

@end
