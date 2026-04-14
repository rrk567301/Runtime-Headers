@interface OSADefaults : NSObject

+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (BOOL)boolForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (id)dictionaryRepresentation;
+ (void)removeObjectForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (void)sendOperation:(unsigned long long)a0 forKey:(id)a1 withBlock:(id /* block */)a2;

@end
