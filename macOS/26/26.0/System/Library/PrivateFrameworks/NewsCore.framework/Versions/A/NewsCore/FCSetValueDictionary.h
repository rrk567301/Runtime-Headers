@class NSMutableDictionary;

@interface FCSetValueDictionary : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSMutableDictionary *backingDictionary;

- (id)_setForKey:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)description;
- (void)removeObjectsForKey:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)objectsForKey:(id)a0;
- (void)addObjects:(id)a0 forKey:(id)a1;

@end
