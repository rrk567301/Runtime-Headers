@class NSMutableDictionary;

@interface FCSetValueDictionary : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSMutableDictionary *backingDictionary;

- (id)description;
- (id)init;
- (void)removeObjectsForKey:(id)a0;
- (id)keyEnumerator;
- (void)addObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_setForKey:(id)a0;
- (id)objectsForKey:(id)a0;
- (void)addObjects:(id)a0 forKey:(id)a1;

@end
