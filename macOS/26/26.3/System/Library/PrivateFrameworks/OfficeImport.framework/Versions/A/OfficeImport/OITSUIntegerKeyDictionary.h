@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (unsigned long long)count;
- (id)objectForKey:(long long)a0;
- (id)description;
- (id)init;
- (id)allValues;
- (id)keyEnumerator;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(long long)a0;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
