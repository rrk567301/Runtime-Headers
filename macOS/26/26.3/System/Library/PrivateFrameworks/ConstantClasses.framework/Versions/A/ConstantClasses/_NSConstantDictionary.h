@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>

+ (id)alloc;

- (unsigned long long)count;
- (unsigned long long)retainCount;
- (id)allKeys;
- (unsigned long long)capacity;
- (id)objectForKey:(id)a0;
- (id)retain;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)allValues;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)dealloc;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (oneway void)release;

@end
