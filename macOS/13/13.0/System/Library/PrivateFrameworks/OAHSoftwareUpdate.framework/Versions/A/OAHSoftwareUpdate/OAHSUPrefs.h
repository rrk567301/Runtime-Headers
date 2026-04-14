@interface OAHSUPrefs : NSObject

+ (id)sharedInstance;

- (id)valueForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (BOOL)debugMode;
- (BOOL)stagedUpdates;
- (id)catalogOverride;
- (id)rosettaConfigurationAdditionsPath;
- (BOOL)allowOnNonAppleSilicon;

@end
