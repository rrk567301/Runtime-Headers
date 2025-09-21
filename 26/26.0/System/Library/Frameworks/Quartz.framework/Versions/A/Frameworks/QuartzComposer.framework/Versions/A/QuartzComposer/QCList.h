@interface QCList : GFList

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)setObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)valueForKey:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setKey:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1 forKey:(id)a2;

@end
