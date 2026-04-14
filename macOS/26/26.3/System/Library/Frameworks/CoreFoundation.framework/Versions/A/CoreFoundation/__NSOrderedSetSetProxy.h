@interface __NSOrderedSetSetProxy : NSSet {
    id _orderedSet;
}

- (unsigned long long)count;
- (id)initWithOrderedSet:(id)a0;
- (id)member:(id)a0;
- (id)objectEnumerator;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
