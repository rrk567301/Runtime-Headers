@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying> {
    Class _defaultClass;
    NSMutableDictionary *_dict;
}

- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)keys;
- (id)deepCopy;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)initWithDefaultClass:(Class)a0;
- (void)setDictionary:(id)a0;
- (void).cxx_destruct;
- (id)finalDictionary;
- (id)_copyWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)_mutableCopyOfFinalDictionaryWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)existingObjectForKey:(id)a0;

@end
