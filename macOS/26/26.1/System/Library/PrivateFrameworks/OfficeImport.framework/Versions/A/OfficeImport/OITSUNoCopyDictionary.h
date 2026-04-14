@interface OITSUNoCopyDictionary : NSMutableDictionary {
    struct __CFDictionary { } *mDictionary;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeAllObjects;
- (id)allValues;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)removeObjectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (id)initWithCFDictionary:(struct __CFDictionary { } *)a0;
- (void)setObject:(id)a0 forUncopiedKey:(id)a1;

@end
