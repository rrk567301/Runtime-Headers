@class FCMapTable;

@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) FCMapTable *backingMapTable;

- (id)_setForKey:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)objectEnumerator;
- (id)description;
- (void)removeObjectsForKey:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)objectsForKey:(id)a0;
- (void)addObjects:(id)a0 forKey:(id)a1;

@end
