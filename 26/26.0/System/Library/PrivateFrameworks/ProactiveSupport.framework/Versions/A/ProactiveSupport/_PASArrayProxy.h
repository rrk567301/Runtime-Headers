@interface _PASArrayProxy : _PASLazyArrayBase <NSFastEnumeration> {
    id /* block */ _objectAtIndexBlock;
    id /* block */ _countBlock;
}

- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)_pas_unproxy;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;

@end
