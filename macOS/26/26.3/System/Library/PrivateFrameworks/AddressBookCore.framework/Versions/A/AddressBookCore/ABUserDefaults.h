@class NSDictionary;
@protocol ABPrimitiveUserDefaults;

@interface ABUserDefaults : NSObject {
    id<ABPrimitiveUserDefaults> _primitiveDefaults;
    NSDictionary *_registeredDefaults;
    BOOL _areAddressingGrammarPreferencesLoaded;
}

@property (copy) NSDictionary *registeredDefaults;

+ (id)log;
+ (id)preferencesWithApplicationID:(id)a0;
+ (id)standardPreferences;
+ (id)addressBookManagerPreferences;
+ (id)addressBookPreferences;
+ (id)iisSupportPreferences;
+ (id)makeAddressBookManagerPreferences;
+ (id)makeAddressBookPreferences;
+ (id)makeIISSupportPreferences;
+ (id)makeStandardPreferences;

- (long long)integerForKey:(id)a0;
- (void)registerDefaults:(id)a0;
- (id)initWithPrimitiveDefaults:(id)a0;
- (double)doubleForKey:(id)a0;
- (long long)integerForKey:(id)a0 keyExists:(BOOL *)a1;
- (BOOL)boolForKey:(id)a0;
- (id)initWithApplicationID:(id)a0;
- (id)primitiveDefaults;
- (id)objectForKey:(id)a0;
- (void)setPrimitiveObject:(id)a0 forKey:(id)a1;
- (BOOL)userHasOptedOutOfPreference:(id)a0;
- (id)primitiveObjectForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (long long)primitiveIntegerValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (void)primitiveRemoveObjectForKey:(id)a0;
- (void)setupAutosync;
- (void).cxx_destruct;
- (BOOL)userHasOptedInToPreference:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (BOOL)primitiveBoolValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (BOOL)boolForKey:(id)a0 keyExists:(BOOL *)a1;
- (void)removeObjectForKey:(id)a0;
- (void)lazilyLoadAddressingGrammarPreferences;

@end
