@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (void)setObject:(id)a0 forKey:(long long)a1;
- (unsigned long long)count;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectForKey:(long long)a0;
- (id)description;
- (id)objectForKey:(long long)a0;
- (id)init;
- (id)keyEnumerator;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)removeAllObjects;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
