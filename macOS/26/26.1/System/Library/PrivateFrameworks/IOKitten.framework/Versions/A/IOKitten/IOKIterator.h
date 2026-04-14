@interface IOKIterator : IOKObject {
    id /* block */ _enumerationBlock;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void)enumerateWithBlock:(id /* block */)a0;
- (id)nextObject;
- (void)enumerate;
- (id)initWithIOObject:(unsigned int)a0;
- (id)initWithIterator:(unsigned int)a0 enumerationBlock:(id /* block */)a1;
- (void)reset;
- (id)initWithIterator:(unsigned int)a0;
- (void).cxx_destruct;

@end
