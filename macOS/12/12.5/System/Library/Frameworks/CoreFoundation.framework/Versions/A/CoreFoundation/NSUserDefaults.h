@class NSArray;

@interface NSUserDefaults : NSObject {
    id _kvo_;
    struct __CFString { } *_identifier_;
    struct __CFString { } *_container_;
    void *_reserved[2];
}

@property (class, readonly) NSUserDefaults *standardUserDefaults;

@property (readonly, copy) NSArray *volatileDomainNames;

+ (id)standardUserDefaults;
+ (void)setStandardUserDefaults:(id)a0;
+ (void)resetStandardUserDefaults;
+ (id)_copyStandardUserDefaultsIfPresent;
+ (void)_ensureAndLockPreferredLanguageLock;
+ (void)_web_addDefaultsChangeObserver;
+ (void)_web_defaultsDidChange;
+ (id)_web_preferredLanguageCode;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (id)valueForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)dictionaryRepresentation;
- (void)_willBeginKeyValueObserving;
- (void)_didEndKeyValueObserving;
- (void)setObject:(id)a0 forKey:(id)a1 inDomain:(id)a2;
- (id)initWithSuiteName:(id)a0;
- (id)_initWithSuiteName:(id)a0 container:(id)a1;
- (id)initWithUser:(id)a0;
- (void)setPersistentDomain:(id)a0 forName:(id)a1;
- (id)objectForKey:(id)a0 inDomain:(id)a1;
- (void)removeObjectForKey:(id)a0 inDomain:(id)a1;
- (id)dataForKey:(id)a0;
- (id)stringArrayForKey:(id)a0;
- (long long)longForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setLong:(long long)a0 forKey:(id)a1;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setURL:(id)a0 forKey:(id)a1;
- (id)searchList;
- (void)setSearchList:(id)a0;
- (void)addSuiteNamed:(id)a0;
- (void)removeSuiteNamed:(id)a0;
- (void)registerDefaults:(id)a0;
- (id)volatileDomainForName:(id)a0;
- (void)setVolatileDomain:(id)a0 forName:(id)a1;
- (void)removeVolatileDomainForName:(id)a0;
- (id)persistentDomainNames;
- (id)persistentDomainForName:(id)a0;
- (void)removePersistentDomainForName:(id)a0;
- (BOOL)objectIsForcedForKey:(id)a0;
- (BOOL)objectIsForcedForKey:(id)a0 inDomain:(id)a1;
- (struct __CFString { } *)_container;
- (struct __CFString { } *)_identifier;
- (void)_setIdentifier:(struct __CFString { } *)a0;
- (void)_setContainer:(struct __CFURL { } *)a0;
- (BOOL)_observingCFPreferences;
- (id)_kvo;
- (void)_setKVO:(id)a0;
- (id)volatileDomainNames;

@end
