@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectForKey:(long long)a0;
- (id)keyEnumerator;
- (void)removeObjectForKey:(long long)a0;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (id)allValues;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
