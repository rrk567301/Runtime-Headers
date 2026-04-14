@class NSMutableDictionary;

@interface LUIManagedPrefs : NSObject

@property (retain) NSMutableDictionary *managedPreferences;
@property BOOL MCXSettingsChanged;

+ (id)managedPrefs;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)dealloc;
- (void)markMCXSettings;
- (BOOL)didMCXSettingsChange;
- (void)mergeMCXPrefs;

@end
