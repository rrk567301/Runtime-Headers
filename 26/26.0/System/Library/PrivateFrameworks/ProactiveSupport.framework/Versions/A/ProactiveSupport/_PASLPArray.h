@class NSData, _PASLPArrayContext;
@protocol _PASLPReaderProtocol;

@interface _PASLPArray : _PASLazyArrayBase <NSFastEnumeration> {
    id<_PASLPReaderProtocol> _reader;
    _PASLPArrayContext *_context;
    NSData *_objects;
}

- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)isEqualToArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithLazyPlistReader:(id)a0 context:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_pas_overrideUnlazyArray;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;

@end
