@class AFBBufRef;

@interface AFBArray : NSArray {
    AFBBufRef *_bufRef;
    unsigned long long _count;
    id /* block */ _objectAtIndex;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBufRef:(id)a0 count:(unsigned long long)a1 objectAtIndex:(id /* block */)a2;

@end
