@interface __NSPlaceholderDictionary : NSMutableDictionary

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithContentsOfFile:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)retain;
- (unsigned long long)count;
- (unsigned long long)retainCount;
- (void)removeObjectForKey:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (oneway void)release;
- (id)init;
- (id)keyEnumerator;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (void)dealloc;

@end
