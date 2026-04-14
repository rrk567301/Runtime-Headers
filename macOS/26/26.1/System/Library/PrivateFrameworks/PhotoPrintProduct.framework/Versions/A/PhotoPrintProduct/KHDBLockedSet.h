@class NSArray, NSMutableSet;

@interface KHDBLockedSet : NSMutableSet {
    NSMutableSet *m_set;
    NSArray *m_cachedAllObjects;
    int m_spinlock;
}

+ (id)setWithArray:(id)a0;
+ (id)set;
+ (id)setWithSet:(id)a0;
+ (id)setWithObjects:(id)a0;
+ (id)setWithCapacity:(unsigned long long)a0;
+ (id)setWithObject:(id)a0;
+ (id)setWithObjects:(id *)a0 count:(unsigned long long)a1;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithLocale:(id)a0;
- (id)member:(id)a0;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)allObjects;
- (id)valueForKey:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)removeAllObjects;
- (void)minusSet:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)unionSet:(id)a0;
- (void)setSet:(id)a0;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)removeObject:(id)a0;
- (Class)classForCoder;
- (BOOL)intersectsSet:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)initWithObjects:(id *)a0 count:(unsigned long long)a1;
- (id)description;
- (id)initWithObjects:(id)a0;
- (id)initWithSet:(id)a0;
- (void)dealloc;
- (id)anyObject;
- (void)intersectSet:(id)a0;
- (BOOL)isEqualToSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (unsigned long long)count;
- (id)initWithArray:(id)a0;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (void)addObject:(id)a0;
- (void)_mutate;
- (BOOL)isSubsetOfSet:(id)a0;
- (id)init;
- (id)_lockedAllObjects;
- (id)grabAllObjects;

@end
