@interface AMSFeatureFlagController : NSObject

+ (BOOL)toggleFlags:(id)a0 enabled:(BOOL)a1;
+ (BOOL)_ffctlWithFlags:(id)a0 enabled:(BOOL)a1;
+ (id)_generateScriptForFlags:(id)a0 enabled:(BOOL)a1;
+ (void)verifyFlags;
+ (id)ams_verifyFlags;

@end
