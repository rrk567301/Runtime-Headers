@class NSMutableDictionary;

@interface BSUserDefaultsTestDoubleDictionaryImpl : NSUserDefaults {
    NSMutableDictionary *_dictionary;
}

- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (id)stringArrayForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setURL:(id)a0 forKey:(id)a1;
- (void)registerDefaults:(id)a0;

@end
