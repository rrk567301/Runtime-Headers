@interface NSMutableIndexPath : NSIndexPath {
    unsigned long long *_mutableIndexes;
    BOOL _locked;
}

+ (void)setIndex:(unsigned long long)a0 atPosition:(unsigned long long)a1 forIndexPath:(id *)a2;

- (id)retain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (long long)compare:(id)a0;
- (id)initWithIndexes:(const unsigned long long *)a0 length:(unsigned long long)a1;
- (unsigned long long)indexAtPosition:(unsigned long long)a0;
- (void)getIndexes:(unsigned long long *)a0;

@end
