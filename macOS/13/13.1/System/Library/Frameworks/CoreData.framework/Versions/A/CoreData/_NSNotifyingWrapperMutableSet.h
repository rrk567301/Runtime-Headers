@class NSString, NSManagedObject, NSMutableSet;

@interface _NSNotifyingWrapperMutableSet : NSMutableSet {
    NSManagedObject *_container;
    NSString *_key;
    NSMutableSet *_mutableSet;
}

+ (Class)classForKeyedUnarchiver;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)intersectSet:(id)a0;
- (void)minusSet:(id)a0;
- (void)removeAllObjects;
- (void)setSet:(id)a0;
- (void)unionSet:(id)a0;
- (id)allObjects;
- (Class)classForCoder;
- (id)member:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (void)getObjects:(id *)a0;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)objectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)anyObject;
- (BOOL)isEqualToSet:(id)a0;
- (BOOL)isSubsetOfSet:(id)a0;
- (id)valueForKey:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (id)initWithContainer:(id)a0 key:(id)a1 mutableSet:(id)a2;

@end
