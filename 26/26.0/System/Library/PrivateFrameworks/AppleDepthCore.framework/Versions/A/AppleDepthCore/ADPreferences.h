@class NSString, NSDictionary, NSMutableDictionary, NSUserDefaults;

@interface ADPreferences : NSObject {
    NSString *_domain;
    NSUserDefaults *_globalUserDefaults;
    NSUserDefaults *_userDefaults;
    NSDictionary *_originalDefaults;
    NSMutableDictionary *_currentDefaults;
    BOOL _ignoreValueUpdate;
}

- (id)stringForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)dealloc;
- (id)numberForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)listForKey:(id)a0;
- (id)initWithDomain:(id)a0 defaultValues:(id)a1;
- (void)registerUpdateHandlerForKeys:(id)a0 invokeOnRegistration:(BOOL)a1 scopeObject:(id)a2 handlerBlock:(id /* block */)a3;
- (BOOL)createPropertyForKey:(id)a0;
- (void)updateValue:(id)a0 forKey:(id)a1;

@end
