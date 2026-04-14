@class NSMutableDictionary, NSMutableArray;

@interface BioUserDefaults : NSObject {
    NSMutableDictionary *_registeredDefaults;
    NSMutableArray *_updateBlocks;
}

+ (id)sharedInstance;
+ (id)preferenceObjectForKey:(id)a0;

- (BOOL)setBool:(BOOL)a0 forKey:(id)a1;
- (void)registerDefaults:(id)a0;
- (id)stringForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)stateDictionary;
- (BOOL)synchronize;
- (id)numberForKey:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)updateNotification;
- (unsigned long long)unsignedIntegerForKey:(id)a0;
- (int)intForKey:(id)a0;
- (id)objectOfClass:(Class)a0 forKey:(id)a1;
- (void)registerUpdateNotification:(id /* block */)a0;
- (void)unregisterUpdateNotification:(id /* block */)a0;
- (unsigned int)unsignedIntForKey:(id)a0;

@end
