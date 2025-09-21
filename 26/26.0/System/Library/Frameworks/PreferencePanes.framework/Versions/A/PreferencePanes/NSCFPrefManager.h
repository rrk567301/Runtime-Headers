@class NSMutableDictionary;

@interface NSCFPrefManager : NSObject {
    NSMutableDictionary *_registeredDefaults;
}

+ (id)standardPrefManager;

- (id)stringForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)setString:(id)a0 forKey:(id)a1 inDomain:(id)a2;
- (id)objectForKey:(id)a0;
- (long long)integerForKey:(id)a0 inDomain:(id)a1;
- (void)synchronize;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1 inDomain:(id)a2;
- (float)floatForKey:(id)a0;
- (id)stringForKey:(id)a0 inDomain:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1 inDomain:(id)a2;
- (id)objectForKey:(id)a0 inDomain:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)deleteValueForKey:(id)a0;
- (BOOL)booleanForKey:(id)a0;
- (void).cxx_destruct;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)synchronizeDomain:(id)a0;
- (void *)_copyValueForKey:(id)a0 inDomain:(id)a1;
- (BOOL)booleanForKey:(id)a0 inDomain:(id)a1;
- (void)copyCurrentUserPrefsToMachinePrefsForDomain:(id)a0;
- (void)deleteValueForKey:(id)a0 inDomain:(id)a1;
- (double)doubleForKey:(id)a0 inDomain:(id)a1;
- (float)floatForKey:(id)a0 inDomain:(id)a1;
- (void)registerDefaults:(id)a0 forDomain:(id)a1;
- (void)setBoolean:(BOOL)a0 forKey:(id)a1;
- (void)setBoolean:(BOOL)a0 forKey:(id)a1 inDomain:(id)a2;
- (void)setDouble:(double)a0 forKey:(id)a1 inDomain:(id)a2;
- (void)setFloat:(float)a0 forKey:(id)a1 inDomain:(id)a2;

@end
