@interface _BPSReduceInner : BPSReduceProducer

@property (readonly, nonatomic) id /* block */ reduce;

- (id)initWithDownstream:(id)a0 initial:(id)a1 reduce:(id /* block */)a2;
- (id)receiveNewValue:(id)a0;
- (void).cxx_destruct;

@end
