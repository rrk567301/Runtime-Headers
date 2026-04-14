@class NSMutableDictionary;

@interface LUIManagedPrefs : NSObject

@property (retain) NSMutableDictionary *managedPreferences;
@property BOOL MCXSettingsChanged;

+ (id)managedPrefs;

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)synchronize;
- (void)markMCXSettings;
- (BOOL)didMCXSettingsChange;
- (void)mergeMCXPrefs;

@end
