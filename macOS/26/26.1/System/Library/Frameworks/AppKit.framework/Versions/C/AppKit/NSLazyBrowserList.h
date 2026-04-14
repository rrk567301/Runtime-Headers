@interface NSLazyBrowserList : NSMutableArray {
    unsigned long long count;
}

- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void)removeLastObject;
- (void)makeObjectsPerform:(SEL)a0;
- (void)makeObjectsPerform:(SEL)a0 withObject:(id)a1;

@end
