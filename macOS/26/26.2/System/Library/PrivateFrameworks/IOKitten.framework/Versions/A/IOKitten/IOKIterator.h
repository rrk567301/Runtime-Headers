@interface IOKIterator : IOKObject {
    id /* block */ _enumerationBlock;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)initWithIOObject:(unsigned int)a0;
- (id)nextObject;
- (void)reset;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enumerate;
- (id)initWithIterator:(unsigned int)a0;
- (id)initWithIterator:(unsigned int)a0 enumerationBlock:(id /* block */)a1;

@end
