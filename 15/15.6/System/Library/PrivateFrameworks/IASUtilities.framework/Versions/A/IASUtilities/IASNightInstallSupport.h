@interface IASNightInstallSupport : NSObject

+ (char)muteBootChimeForNextReboot;
+ (id)prepareNightInstall;
+ (id)restoreFromNightInstall;

@end
