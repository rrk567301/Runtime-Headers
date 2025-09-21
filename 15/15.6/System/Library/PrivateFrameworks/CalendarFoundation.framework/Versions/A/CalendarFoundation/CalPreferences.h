@class NSString, NSMutableSet;
@protocol CalPreferencesStore;

@interface CalPreferences : NSObject {
    id<CalPreferencesStore> _store;
    NSString *_domain;
    char _readOnly;
    NSMutableSet *_registeredNotificationsToReflect;
}

+ (id)log;
+ (id)_debugColorPreferences;
+ (id)getDebugColorNumberForPreference:(id)a0 dark:(char)a1;
+ (id)getDebugColorStringForPreference:(id)a0 dark:(char)a1;
+ (void)removeDebugColorPreference:(id)a0 dark:(char)a1;
+ (void)setDebugColorNumberForPreference:(id)a0 value:(id)a1 dark:(char)a2;
+ (void)setDebugColorStringForPreference:(id)a0 value:(id)a1 dark:(char)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (void)_preferenceChangedExternally:(id)a0;
- (void)_preferenceChangedInternally:(id)a0;
- (void)_synchronizePreferences;
- (id)debugColorStringForString:(id)a0 isDark:(char)a1;
- (char)getBooleanPreference:(id)a0 defaultValue:(char)a1;
- (long long)getIntegerPreference:(id)a0 defaultValue:(long long)a1;
- (id)getValueForPreference:(id)a0 expectedClass:(Class)a1;
- (id)initWithDomain:(id)a0 readOnly:(char)a1;
- (id)initWithDomain:(id)a0 store:(id)a1;
- (id)initWithDomain:(id)a0 store:(id)a1 readOnly:(char)a2;
- (void)registerReflectionForPreferenceWithNotificationName:(id)a0;
- (void)removePreference:(id)a0 notificationName:(id)a1;
- (void)setBooleanPreference:(id)a0 value:(char)a1 notificationName:(id)a2;
- (void)setIntegerPreference:(id)a0 value:(long long)a1 notificationName:(id)a2;
- (void)setValueForPreference:(id)a0 value:(id)a1 notificationName:(id)a2;
- (void)unregisterReflectionForPreferenceWithNotificationName:(id)a0;

@end
