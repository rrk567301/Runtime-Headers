@class NSArray, NSMutableSet;

@interface KHDBLockedSet : NSMutableSet {
    NSMutableSet *m_set;
    NSArray *m_cachedAllObjects;
    int m_spinlock;
}

+ (id)setWithSet:(id)a0;
+ (id)set;
+ (id)setWithArray:(id)a0;
+ (id)setWithObjects:(id)a0;
+ (id)setWithCapacity:(unsigned long long)a0;
+ (id)setWithObject:(id)a0;
+ (id)setWithObjects:(id *)a0 count:(unsigned long long)a1;

- (BOOL)intersectsSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_mutate;
- (void)setSet:(id)a0;
- (id)initWithObjects:(id *)a0 count:(unsigned long long)a1;
- (void)removeObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)isEqualToSet:(id)a0;
- (id)anyObject;
- (void)dealloc;
- (void)unionSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (unsigned long long)count;
- (void)minusSet:(id)a0;
- (id)valueForKey:(id)a0;
- (void)intersectSet:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)isSubsetOfSet:(id)a0;
- (id)member:(id)a0;
- (id)init;
- (id)descriptionWithLocale:(id)a0;
- (void)addObject:(id)a0;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)allObjects;
- (void)addObjectsFromArray:(id)a0;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (id)description;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (id)initWithObjects:(id)a0;
- (id)initWithArray:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)initWithSet:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (id)_lockedAllObjects;
- (id)grabAllObjects;

@end
