@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying> {
    Class _defaultClass;
    NSMutableDictionary *_dict;
}

- (void)setDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (id)deepCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectForKey:(id)a0;
- (id)keys;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithDefaultClass:(Class)a0;
- (id)finalDictionary;
- (id)_copyWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)_mutableCopyOfFinalDictionaryWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)existingObjectForKey:(id)a0;

@end
