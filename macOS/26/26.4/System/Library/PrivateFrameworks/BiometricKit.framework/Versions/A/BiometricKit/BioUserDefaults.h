@class NSMutableDictionary, NSMutableArray;

@interface BioUserDefaults : NSObject {
    NSMutableDictionary *_registeredDefaults;
    NSMutableArray *_updateBlocks;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (void)removeAllPreferences;
+ (id)preferenceObjectForKey:(id)a0;
+ (void)removeLegacyPreferences;

- (id)stringForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (BOOL)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (BOOL)synchronize;
- (id)stateDictionary;
- (void).cxx_destruct;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (void)registerDefaults:(id)a0;
- (void)updateNotification;
- (unsigned long long)unsignedIntegerForKey:(id)a0;
- (int)intForKey:(id)a0;
- (id)objectOfClass:(Class)a0 forKey:(id)a1;
- (void)registerUpdateNotification:(id /* block */)a0;
- (void)unregisterUpdateNotification:(id /* block */)a0;
- (unsigned int)unsignedIntForKey:(id)a0;

@end
