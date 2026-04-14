@interface __NSPlaceholderDictionary : NSMutableDictionary

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithContentsOfFile:(id)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)retain;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)removeObjectForKey:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;

@end
