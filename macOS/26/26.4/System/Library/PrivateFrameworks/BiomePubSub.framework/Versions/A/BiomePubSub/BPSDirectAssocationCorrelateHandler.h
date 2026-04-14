@interface BPSDirectAssocationCorrelateHandler : BPSCorrelateHandler {
    id /* block */ _correlating;
}

- (id)correlateWithCurrentEvent:(id)a0;
- (void)receiveCurrentEvent:(id)a0;
- (void).cxx_destruct;
- (void)receivePriorEvent:(id)a0;
- (id)initWithCorrelating:(id /* block */)a0;

@end
