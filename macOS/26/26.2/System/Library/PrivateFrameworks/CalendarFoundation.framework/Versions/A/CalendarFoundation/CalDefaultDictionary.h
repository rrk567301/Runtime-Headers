@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying> {
    Class _defaultClass;
    NSMutableDictionary *_dict;
}

- (unsigned long long)count;
- (id)keys;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaultClass:(Class)a0;
- (void)setDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (id)deepCopy;
- (void)removeAllObjects;
- (id)finalDictionary;
- (id)_copyWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)_mutableCopyOfFinalDictionaryWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)existingObjectForKey:(id)a0;

@end
