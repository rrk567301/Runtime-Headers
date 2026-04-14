@interface _AKMessageForwarder : NSObject <AKAdaptiveServiceInterface> {
    id _weakReceiver;
    id _strongReceiver;
}

- (void)activate;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithReceiver:(id)a0 strong:(BOOL)a1;
- (id)initWithStrongReceiver:(id)a0;
- (id)initWithWeakReceiver:(id)a0;

@end
