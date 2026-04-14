@interface LACInstalledAppsCache : NSObject

+ (id)sharedInstance;

- (id)infoForPid:(int)a0;
- (id)binaryNameForPid:(int)a0;
- (id)bundlePathForPid:(int)a0 stripXPCService:(BOOL)a1;
- (id)pathForPid:(int)a0;
- (id)_bundleForPid:(int)a0;
- (id)_localizedNameForBundle:(id)a0;
- (id)_localizedNameForPath:(id)a0;
- (id)_localizedNameFromInfoDict:(id)a0 path:(id)a1;
- (id)_bundlePathForPid:(int)a0;

@end
