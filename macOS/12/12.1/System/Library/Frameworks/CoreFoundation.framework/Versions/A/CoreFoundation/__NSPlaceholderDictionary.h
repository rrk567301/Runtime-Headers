@interface __NSPlaceholderDictionary : NSMutableDictionary

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;

@end
