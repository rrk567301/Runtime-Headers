@class AFBBufRef;

@interface AFBArray : NSArray {
    AFBBufRef *_bufRef;
    unsigned long long _count;
    id /* block */ _objectAtIndex;
}

- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithBufRef:(id)a0 count:(unsigned long long)a1 objectAtIndex:(id /* block */)a2;

@end
