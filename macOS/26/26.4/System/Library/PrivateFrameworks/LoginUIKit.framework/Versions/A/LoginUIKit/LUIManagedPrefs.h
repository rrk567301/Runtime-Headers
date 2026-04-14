@class NSMutableDictionary;

@interface LUIManagedPrefs : NSObject

@property (retain) NSMutableDictionary *managedPreferences;
@property BOOL MCXSettingsChanged;

+ (id)managedPrefs;

- (id)objectForKey:(id)a0;
- (void)synchronize;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)dealloc;
- (void)markMCXSettings;
- (BOOL)didMCXSettingsChange;
- (void)mergeMCXPrefs;

@end
