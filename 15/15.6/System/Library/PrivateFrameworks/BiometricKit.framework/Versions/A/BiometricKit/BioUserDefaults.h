@class NSMutableDictionary, NSMutableArray;

@interface BioUserDefaults : NSObject {
    NSMutableDictionary *_registeredDefaults;
    NSMutableArray *_updateBlocks;
}

+ (id)sharedInstance;
+ (id)preferenceObjectForKey:(id)a0;

- (void).cxx_destruct;
- (char)boolForKey:(id)a0;
- (char)setObject:(id)a0 forKey:(id)a1;
- (char)synchronize;
- (id)numberForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (char)setBool:(char)a0 forKey:(id)a1;
- (void)registerDefaults:(id)a0;
- (void)updateNotification;
- (unsigned long long)unsignedIntegerForKey:(id)a0;
- (int)intForKey:(id)a0;
- (unsigned int)unsignedIntForKey:(id)a0;
- (id)stateDictionary;
- (id)objectOfClass:(Class)a0 forKey:(id)a1;
- (void)registerUpdateNotification:(id /* block */)a0;
- (void)unregisterUpdateNotification:(id /* block */)a0;

@end
