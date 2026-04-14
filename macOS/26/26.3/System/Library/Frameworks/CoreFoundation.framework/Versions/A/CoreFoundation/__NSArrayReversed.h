@interface __NSArrayReversed : NSArray {
    id _array;
    unsigned long long _cnt;
}

- (unsigned long long)count;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithArray:(id)a0;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;

@end
