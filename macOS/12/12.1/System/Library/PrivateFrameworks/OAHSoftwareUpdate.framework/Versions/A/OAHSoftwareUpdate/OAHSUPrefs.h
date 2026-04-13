@interface OAHSUPrefs : NSObject

+ (id)sharedInstance;

- (id)valueForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (BOOL)debugMode;
- (BOOL)allowOnNonAppleSilicon;
- (id)rosettaConfigurationAdditionsPath;
- (BOOL)stagedUpdates;
- (id)catalogOverride;

@end
