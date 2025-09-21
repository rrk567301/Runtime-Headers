@interface NSConstantDictionary : NSDictionary <NSFastEnumeration> {
    unsigned long long _options;
    unsigned long long _count;
    const id *_keys;
    const id *_objects;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (void)__apply:(void /* function */ *)a0 context:(void *)a1;
- (id)keyOfEntryWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)autorelease;
- (id)keysOfEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (BOOL)_isDeallocating;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)allKeys;
- (id)mutableCopy;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_tryRetain;
- (unsigned long long)count;
- (id)copy;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (oneway void)release;
- (id)allValues;

@end
