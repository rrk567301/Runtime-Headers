@class NSArray, NSMutableDictionary;

@interface SCRFKNPreferencesManager : NSObject {
    NSMutableDictionary *_hotKeyInitialSettings;
    NSArray *_hotKeys;
    long long _initialKeyboardMode;
    BOOL _isOptimizationEnabled;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)_enableFullKeyboardAccess;
- (void)_restoreKeyboardMode;
- (BOOL)_isSymbolicHotKeyEnabled:(unsigned int)a0;
- (void)_removeKeysFromPreferences;
- (void)setIsOptimizedKeyboardNavigationEnabled:(BOOL)a0;
- (BOOL)isOptimizedKeyboardNavigationEnabled;

@end
