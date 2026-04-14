@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>

+ (id)alloc;

- (unsigned long long)capacity;
- (id)retain;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)allValues;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;

@end
