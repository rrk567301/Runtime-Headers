@class NSMutableDictionary;

@interface LUIManagedPrefs : NSObject

@property (retain) NSMutableDictionary *managedPreferences;
@property char MCXSettingsChanged;

+ (id)managedPrefs;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (void)markMCXSettings;
- (char)didMCXSettingsChange;
- (void)mergeMCXPrefs;

@end
