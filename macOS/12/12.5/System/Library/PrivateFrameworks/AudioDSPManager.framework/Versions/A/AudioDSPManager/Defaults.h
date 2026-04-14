@class NSUserDefaults, NSMutableDictionary;

@interface Defaults : NSObject <NSCoding> {
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_userDefaultsDictionary;
}

@property (class, readonly, nonatomic) Defaults *sharedInstance;

- (id)init;
- (id)objectForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)numberForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)dataForKey:(id)a0;
- (id)initWithUserDefaults:(id)a0;
- (id)objectForKey:(id)a0 withClass:(Class)a1;
- (void)registerDefaultsObserver:(id)a0 forKey:(id)a1;
- (void)unregisterDefaultsObserver:(id)a0 forKey:(id)a1;

@end
