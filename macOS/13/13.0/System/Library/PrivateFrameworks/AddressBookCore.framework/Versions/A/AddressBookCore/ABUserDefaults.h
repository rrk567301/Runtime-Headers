@class NSDictionary;
@protocol ABPrimitiveUserDefaults;

@interface ABUserDefaults : NSObject {
    id<ABPrimitiveUserDefaults> _primitiveDefaults;
}

@property (copy) NSDictionary *registeredDefaults;

+ (id)standardPreferences;
+ (id)preferencesWithApplicationID:(id)a0;
+ (id)addressBookPreferences;
+ (id)makeAddressBookPreferences;
+ (id)addressBookManagerPreferences;
+ (id)makeAddressBookManagerPreferences;
+ (id)iisSupportPreferences;
+ (id)makeIISSupportPreferences;
+ (id)makeStandardPreferences;

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)synchronize;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)registerDefaults:(id)a0;
- (id)initWithApplicationID:(id)a0;
- (id)initWithPrimitiveDefaults:(id)a0;
- (id)primitiveDefaults;
- (id)primitiveObjectForKey:(id)a0;
- (void)setPrimitiveObject:(id)a0 forKey:(id)a1;
- (long long)primitiveIntegerValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (BOOL)primitiveBoolValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (void)primitiveRemoveObjectForKey:(id)a0;
- (void)setupAutosync;
- (BOOL)boolForKey:(id)a0 keyExists:(BOOL *)a1;
- (long long)integerForKey:(id)a0 keyExists:(BOOL *)a1;
- (BOOL)userHasOptedOutOfPreference:(id)a0;
- (BOOL)userHasOptedInToPreference:(id)a0;

@end
