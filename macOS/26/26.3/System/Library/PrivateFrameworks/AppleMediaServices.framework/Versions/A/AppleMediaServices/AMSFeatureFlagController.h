@interface AMSFeatureFlagController : NSObject

+ (id)_generateScriptForFlags:(id)a0 enabled:(BOOL)a1;
+ (void)verifyFlags;
+ (BOOL)toggleFlags:(id)a0 enabled:(BOOL)a1;
+ (BOOL)_ffctlWithFlags:(id)a0 enabled:(BOOL)a1;

@end
