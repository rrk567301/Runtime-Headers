@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying> {
    Class _defaultClass;
    NSMutableDictionary *_dict;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setDictionary:(id)a0;
- (id)keys;
- (id)_copyWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)initWithDefaultClass:(Class)a0;
- (id)_mutableCopyOfFinalDictionaryWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)finalDictionary;
- (id)deepCopy;
- (id)existingObjectForKey:(id)a0;

@end
