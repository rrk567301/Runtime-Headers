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
- (void)setIsOptimizedKeyboardNavigationEnabled:(BOOL)a0;
- (BOOL)_isSymbolicHotKeyEnabled:(unsigned int)a0;
- (void)_enableFullKeyboardAccess;
- (void)_restoreKeyboardMode;
- (void)_removeKeysFromPreferences;
- (BOOL)isOptimizedKeyboardNavigationEnabled;

@end
