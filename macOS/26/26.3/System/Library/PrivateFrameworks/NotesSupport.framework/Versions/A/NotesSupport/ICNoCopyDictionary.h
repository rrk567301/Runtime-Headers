@interface ICNoCopyDictionary : NSMutableDictionary {
    struct __CFDictionary { } *mDictionary;
}

+ (Class)classForKeyedUnarchiver;

- (unsigned long long)count;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (id)allValues;
- (id)keyEnumerator;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (id)initWithCFDictionary:(struct __CFDictionary { } *)a0;
- (void)setObject:(id)a0 forUncopiedKey:(id)a1;

@end
