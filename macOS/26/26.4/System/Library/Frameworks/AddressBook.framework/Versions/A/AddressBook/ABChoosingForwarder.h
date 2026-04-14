@interface ABChoosingForwarder : NSObject {
    id /* block */ _selectorTest;
    id _yesTarget;
    id _noTarget;
}

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithYesTarget:(id)a0 noTarget:(id)a1 selectorTest:(id /* block */)a2;

@end
