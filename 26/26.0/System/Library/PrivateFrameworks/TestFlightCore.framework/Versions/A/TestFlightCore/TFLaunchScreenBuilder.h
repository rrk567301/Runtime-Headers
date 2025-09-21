@interface TFLaunchScreenBuilder : NSObject

+ (id)_lockupWithAppName:(id)a0 shortVersionString:(id)a1 bundleVersionString:(id)a2 expirationDate:(id)a3 iconUrlTemplate:(id)a4 iconNeedsMask:(BOOL)a5;
+ (id)buildLaunchScreenFromBetaAppLaunchInfo:(id)a0;
+ (id)buildLaunchScreenWithAppName:(id)a0 shortVersionString:(id)a1 bundleVersionString:(id)a2 expirationDate:(id)a3 iconUrlTemplate:(id)a4 testerNotes:(id)a5 iconNeedsMask:(BOOL)a6;

@end
