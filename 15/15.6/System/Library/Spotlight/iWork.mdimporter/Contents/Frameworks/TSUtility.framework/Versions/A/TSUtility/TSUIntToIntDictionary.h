@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

+ (id)dictionary;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (id)allValues;
- (char)containsKey:(long long)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)keyEnumerator;
- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)a0;
- (void)setInt:(long long)a0 forKey:(long long)a1;
- (void)applyFromIntToIntDictionary:(id)a0;
- (id)arrayOfBoxedKeys;
- (long long)intForKey:(long long)a0;
- (char)intIsPresentForKey:(long long)a0 outValue:(long long *)a1;
- (struct __CFDictionary { } *)p_cfDictionary;
- (void)removeAllInts;
- (void)removeIntForKey:(long long)a0;
- (void)incrementValueBy:(long long)a0 forKey:(long long)a1;
- (void)incrementValueForKey:(long long)a0;
- (void)addIntToIntDictionary:(id)a0;

@end
