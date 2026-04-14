@interface OITSUCustomCallBackDictionary : NSMutableDictionary {
    struct __CFDictionary { } *mDictionary;
}

- (id)objectEnumerator;
- (id)objectForKey:(id)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)allValues;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void)dealloc;
- (id)allKeys;
- (id)initWithCFDictionary:(struct __CFDictionary { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0 keyCallBacks:(const struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; } *)a1 valueCallBacks:(const struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (void)setObject:(id)a0 forUncopiedKey:(id)a1;

@end
