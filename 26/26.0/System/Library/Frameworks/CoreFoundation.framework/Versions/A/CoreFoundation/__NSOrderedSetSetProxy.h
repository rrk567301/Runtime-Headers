@interface __NSOrderedSetSetProxy : NSSet {
    id _orderedSet;
}

- (void)dealloc;
- (id)initWithOrderedSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)member:(id)a0;
- (id)objectEnumerator;

@end
