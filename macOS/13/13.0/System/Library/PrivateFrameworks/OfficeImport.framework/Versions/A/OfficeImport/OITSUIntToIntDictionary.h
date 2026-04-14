@interface OITSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)keyEnumerator;
- (id)allKeys;
- (id)allValues;
- (BOOL)containsKey:(long long)a0;
- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)a0;
- (void)setInt:(long long)a0 forKey:(long long)a1;
- (struct __CFDictionary { } *)p_cfDictionary;
- (BOOL)intIsPresentForKey:(long long)a0 outValue:(long long *)a1;
- (long long)intForKey:(long long)a0;
- (void)removeIntForKey:(long long)a0;
- (void)removeAllInts;
- (void)applyFromIntToIntDictionary:(id)a0;
- (id)arrayOfBoxedKeys;

@end
