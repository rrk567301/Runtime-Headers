@class NSArray, NSMutableDictionary;

@interface SCRFKNPreferencesManager : NSObject {
    NSMutableDictionary *_hotKeyInitialSettings;
    NSArray *_hotKeys;
    long long _initialKeyboardMode;
    char _isOptimizationEnabled;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)_enableFullKeyboardAccess;
- (char)_isSymbolicHotKeyEnabled:(unsigned int)a0;
- (void)_removeKeysFromPreferences;
- (void)_restoreKeyboardMode;
- (char)isOptimizedKeyboardNavigationEnabled;
- (void)setIsOptimizedKeyboardNavigationEnabled:(char)a0;

@end
