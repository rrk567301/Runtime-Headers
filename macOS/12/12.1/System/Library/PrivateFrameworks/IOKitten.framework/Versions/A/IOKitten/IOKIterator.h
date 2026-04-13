@interface IOKIterator : IOKObject {
    id /* block */ _enumerationBlock;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)nextObject;
- (void).cxx_destruct;
- (void)reset;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)initWithIterator:(unsigned int)a0;
- (id)initWithIOObject:(unsigned int)a0;
- (id)initWithIterator:(unsigned int)a0 enumerationBlock:(id /* block */)a1;
- (void)enumerate;

@end
