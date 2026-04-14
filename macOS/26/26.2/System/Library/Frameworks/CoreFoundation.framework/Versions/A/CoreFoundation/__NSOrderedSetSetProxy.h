@interface __NSOrderedSetSetProxy : NSSet {
    id _orderedSet;
}

- (id)initWithOrderedSet:(id)a0;
- (unsigned long long)count;
- (id)objectEnumerator;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)member:(id)a0;
- (void)dealloc;

@end
