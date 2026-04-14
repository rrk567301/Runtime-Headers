@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>

+ (id)alloc;

- (unsigned long long)capacity;
- (id)objectEnumerator;
- (id)objectForKey:(id)a0;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)allValues;
- (id)retain;
- (unsigned long long)count;
- (id)keyEnumerator;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)allKeys;

@end
