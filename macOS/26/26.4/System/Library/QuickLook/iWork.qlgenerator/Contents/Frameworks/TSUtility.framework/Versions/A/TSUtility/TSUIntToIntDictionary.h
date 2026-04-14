@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

+ (id)dictionary;

- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)allValues;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setInt:(long long)a0 forKey:(long long)a1;
- (id)init;
- (unsigned long long)count;
- (void)incrementValueBy:(long long)a0 forKey:(long long)a1;
- (BOOL)containsKey:(long long)a0;
- (id)keyEnumerator;
- (id)description;
- (void)dealloc;
- (id)allKeys;
- (void)incrementValueForKey:(long long)a0;
- (void)applyFromIntToIntDictionary:(id)a0;
- (id)arrayOfBoxedKeys;
- (long long)intForKey:(long long)a0;
- (BOOL)intIsPresentForKey:(long long)a0 outValue:(long long *)a1;
- (struct __CFDictionary { } *)p_cfDictionary;
- (void)removeAllInts;
- (void)removeIntForKey:(long long)a0;
- (void)addIntToIntDictionary:(id)a0;

@end
