@interface __NSOrderedSetSetProxy : NSSet {
    id _orderedSet;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)objectEnumerator;
- (id)member:(id)a0;
- (id)initWithOrderedSet:(id)a0;

@end
