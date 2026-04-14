@class AFBBufRef;

@interface AFBArray : NSArray {
    AFBBufRef *_bufRef;
    unsigned long long _count;
    id /* block */ _objectAtIndex;
}

- (unsigned long long)count;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithBufRef:(id)a0 count:(unsigned long long)a1 objectAtIndex:(id /* block */)a2;

@end
