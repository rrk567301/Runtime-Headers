@class FCMapTable;

@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) FCMapTable *backingMapTable;

- (id)objectEnumerator;
- (void)removeObjectsForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)keyEnumerator;
- (id)description;
- (id)_setForKey:(id)a0;
- (id)objectsForKey:(id)a0;
- (void)addObjects:(id)a0 forKey:(id)a1;

@end
