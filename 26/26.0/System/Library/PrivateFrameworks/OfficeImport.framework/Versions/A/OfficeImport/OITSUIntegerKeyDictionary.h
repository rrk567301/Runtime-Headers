@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)objectForKey:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (void)removeObjectForKey:(long long)a0;
- (void)removeAllObjects;
- (id)description;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (id)allValues;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
