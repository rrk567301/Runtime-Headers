@interface TSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeAllObjects;
- (id)allValues;
- (id)objectForKey:(long long)a0;
- (id)description;
- (void)dealloc;
- (void)removeObjectForKey:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (id)init;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
