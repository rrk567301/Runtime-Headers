@interface __NSOrderedSetArrayProxy : NSArray {
    id _orderedSet;
}

- (void)dealloc;
- (id)initWithOrderedSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;

@end
