@interface OITSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (unsigned long long)count;
- (void)setInt:(long long)a0 forKey:(long long)a1;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsKey:(long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (id)description;
- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)a0;
- (id)init;
- (id)keyEnumerator;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)applyFromIntToIntDictionary:(id)a0;
- (id)arrayOfBoxedKeys;
- (long long)intForKey:(long long)a0;
- (BOOL)intIsPresentForKey:(long long)a0 outValue:(long long *)a1;
- (struct __CFDictionary { } *)p_cfDictionary;
- (void)removeAllInts;
- (void)removeIntForKey:(long long)a0;

@end
