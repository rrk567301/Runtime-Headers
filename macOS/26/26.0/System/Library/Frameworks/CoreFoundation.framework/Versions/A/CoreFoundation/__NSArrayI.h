@interface __NSArrayI : NSArray {
    unsigned long long used;
    id *list;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)copy;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)nothingAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectAtIndex:(unsigned long long)a0;

@end
