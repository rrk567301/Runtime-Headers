@class NSDictionary;
@protocol CNPrimitiveUserDefaults;

@interface CNUserDefaults : NSObject {
    id<CNPrimitiveUserDefaults> _primitiveDefaults;
}

@property (copy) NSDictionary *registeredDefaults;

+ (id)inMemoryPreferences;
+ (id)preferencesWithApplicationID:(id)a0;
+ (id)standardPreferences;

- (void).cxx_destruct;
- (char)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (char)synchronize;
- (id)stringForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)setBool:(char)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0;
- (void)registerDefaults:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (char)boolForKey:(id)a0 keyExists:(char *)a1;
- (id)initWithApplicationID:(id)a0;
- (id)initWithPrimitiveDefaults:(id)a0;
- (long long)integerForKey:(id)a0 keyExists:(char *)a1;
- (char)primitiveBoolValueForKey:(id)a0 keyExists:(char *)a1;
- (id)primitiveDefaults;
- (long long)primitiveIntegerValueForKey:(id)a0 keyExists:(char *)a1;
- (id)primitiveObjectForKey:(id)a0;
- (void)primitiveRemoveObjectForKey:(id)a0;
- (void)setPrimitiveObject:(id)a0 forKey:(id)a1;
- (void)setupAutosync;
- (char)userHasOptedInToPreference:(id)a0;
- (char)userHasOptedOutOfPreference:(id)a0;

@end
