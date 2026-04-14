@class NSMutableDictionary;

@interface LUIManagedPrefs : NSObject

@property (retain) NSMutableDictionary *managedPreferences;
@property BOOL MCXSettingsChanged;

+ (id)managedPrefs;

- (void)dealloc;
- (id)objectForKey:(id)a0;
- (void)synchronize;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)markMCXSettings;
- (BOOL)didMCXSettingsChange;
- (void)mergeMCXPrefs;

@end
