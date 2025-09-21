@class NSDictionary, NSBundle;

@interface JIMPreferences : NSObject {
    char _inJIM;
    NSDictionary *_defaultValues;
    NSDictionary *_KotoeriPrefTranslators;
}

@property (class, readonly) NSBundle *inputMethodBundle;
@property (class, readonly) NSBundle *frameworkBundle;

@property (readonly) char environmentBeforeLogin;
@property (nonatomic) unsigned long long clientTypingMethod;

+ (char)isAppleInternal;
+ (id)sharedPreferences;
+ (id)defaultDictionaryPath;
+ (char)isBaseSystem;
+ (id)preferenceKeysForSyncing;
+ (id)trainerDictionaryPath;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (id)stringForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)setBool:(char)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (id)_objectForKey:(id)a0;
- (void)_setObject:(id)a0 forKey:(id)a1;
- (char)canInputModeChangeEnabledState:(id)a0;
- (struct __TISInputSource { } *)_inputSourceRefFromInputModeID:(id)a0;
- (char)_isInputModeIdentifier:(id)a0;
- (char)isInputModeAvailable:(id)a0;
- (char)isSystemCapsLockSwitchEnabled;

@end
