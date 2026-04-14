@interface TSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (id)objectForKey:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectForKey:(long long)a0;
- (void)removeAllObjects;
- (id)allValues;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (id)init;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)description;
- (void)dealloc;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
