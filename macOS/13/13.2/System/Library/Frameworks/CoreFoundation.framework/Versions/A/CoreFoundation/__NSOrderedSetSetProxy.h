@interface __NSOrderedSetSetProxy : NSSet {
    id _orderedSet;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)objectEnumerator;
- (id)member:(id)a0;
- (id)initWithOrderedSet:(id)a0;

@end
