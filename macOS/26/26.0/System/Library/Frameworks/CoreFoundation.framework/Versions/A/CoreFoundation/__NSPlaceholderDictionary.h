@interface __NSPlaceholderDictionary : NSMutableDictionary

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithContentsOfURL:(id)a0;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)retain;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)retainCount;
- (id)initWithContentsOfFile:(id)a0;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (oneway void)release;

@end
