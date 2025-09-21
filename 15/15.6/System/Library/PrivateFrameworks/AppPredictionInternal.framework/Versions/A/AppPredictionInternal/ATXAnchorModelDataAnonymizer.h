@interface ATXAnchorModelDataAnonymizer : NSObject

+ (char)isFirstPartyApp:(id)a0;
+ (void)_hashAndSaltActionKeyMetadataIfNeededInList:(id)a0 withSalt:(id)a1;
+ (void)anonymizeMessage:(id)a0;
+ (id)readDeviceSpecificSalt;
+ (id)setSaltToUserDefaults:(id)a0 scheme:(id)a1;
+ (char)shouldAnonymizeActionType:(id)a0 forBundleId:(id)a1;
+ (char)shouldAnonymizeBundle:(id)a0;

@end
