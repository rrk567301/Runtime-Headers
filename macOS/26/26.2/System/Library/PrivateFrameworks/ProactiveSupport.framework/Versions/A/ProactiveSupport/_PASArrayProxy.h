@interface _PASArrayProxy : _PASLazyArrayBase <NSFastEnumeration> {
    id /* block */ _objectAtIndexBlock;
    id /* block */ _countBlock;
}

- (unsigned long long)count;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)_pas_unproxy;

@end
