@interface OITSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (BOOL)containsKey:(long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (id)description;
- (id)keyEnumerator;
- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)a0;
- (id)allValues;
- (void)setInt:(long long)a0 forKey:(long long)a1;
- (void)applyFromIntToIntDictionary:(id)a0;
- (id)arrayOfBoxedKeys;
- (long long)intForKey:(long long)a0;
- (BOOL)intIsPresentForKey:(long long)a0 outValue:(long long *)a1;
- (struct __CFDictionary { } *)p_cfDictionary;
- (void)removeAllInts;
- (void)removeIntForKey:(long long)a0;

@end
