@class NSDictionary;
@protocol ABPrimitiveUserDefaults;

@interface ABUserDefaults : NSObject {
    id<ABPrimitiveUserDefaults> _primitiveDefaults;
    NSDictionary *_registeredDefaults;
    BOOL _areAddressingGrammarPreferencesLoaded;
}

@property (copy) NSDictionary *registeredDefaults;

+ (id)standardPreferences;
+ (id)log;
+ (id)preferencesWithApplicationID:(id)a0;
+ (id)addressBookManagerPreferences;
+ (id)addressBookPreferences;
+ (id)iisSupportPreferences;
+ (id)makeAddressBookManagerPreferences;
+ (id)makeAddressBookPreferences;
+ (id)makeIISSupportPreferences;
+ (id)makeStandardPreferences;

- (void)registerDefaults:(id)a0;
- (id)initWithApplicationID:(id)a0;
- (BOOL)boolForKey:(id)a0 keyExists:(BOOL *)a1;
- (BOOL)primitiveBoolValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (BOOL)userHasOptedOutOfPreference:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (id)primitiveDefaults;
- (void)setupAutosync;
- (void)primitiveRemoveObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setPrimitiveObject:(id)a0 forKey:(id)a1;
- (long long)primitiveIntegerValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (long long)integerForKey:(id)a0 keyExists:(BOOL *)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (id)initWithPrimitiveDefaults:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0;
- (BOOL)synchronize;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)primitiveObjectForKey:(id)a0;
- (BOOL)userHasOptedInToPreference:(id)a0;
- (id)objectForKey:(id)a0;
- (void)lazilyLoadAddressingGrammarPreferences;

@end
