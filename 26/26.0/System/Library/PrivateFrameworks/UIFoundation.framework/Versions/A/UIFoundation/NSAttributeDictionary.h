@class value;

@interface NSAttributeDictionary : NSDictionary {
    unsigned long long numElements;
    struct _NSAttributeDictionaryElement { unsigned long long hash; value *key; id x0; } elements[1];
}

+ (id)newWithDictionary:(id)a0;
+ (void)initialize;
+ (id)emptyAttributeDictionary;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)__apply:(void /* function */ *)a0 context:(void *)a1;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (BOOL)isEqualToDictionary:(id)a0;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)newWithKey:(id)a0 object:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)keyEnumerator;

@end
