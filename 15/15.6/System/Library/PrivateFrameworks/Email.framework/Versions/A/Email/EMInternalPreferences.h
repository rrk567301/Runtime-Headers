@class NSString, NSObject;
@protocol OS_os_log;

@interface EMInternalPreferences : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
+ (id)observeChangesForPreference:(unsigned long long)a0 usingBlock:(id /* block */)a1;
+ (char)preferenceEnabled:(unsigned long long)a0;
+ (char)_hasUserDefaultValueForKey:(id)a0 expectedValue:(id)a1;
+ (char)_preferenceEnabled:(unsigned long long)a0;
+ (void)_registerForDefaultChanges;
+ (void)_setUserDefaultEnabled:(char)a0 forKey:(id)a1;
+ (char)_userDefaultEnabledForKey:(id)a0 defaultValue:(char)a1;
+ (void)clearPreferenceForTesting:(unsigned long long)a0;
+ (id)defaultForPreference:(unsigned long long)a0;
+ (id)observeChangesForPreference:(unsigned long long)a0 autoCancelToken:(char)a1 usingBlock:(id /* block */)a2;
+ (void)setPreference:(unsigned long long)a0 enabled:(char)a1;
+ (void)setPreferenceForTesting:(unsigned long long)a0 enabled:(char)a1;


@end
