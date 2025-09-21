@interface AMSFeatureFlagController : NSObject

+ (char)_ffctlWithFlags:(id)a0 enabled:(char)a1;
+ (id)_generateScriptForFlags:(id)a0 enabled:(char)a1;
+ (char)toggleFlags:(id)a0 enabled:(char)a1;
+ (void)verifyFlags;

@end
