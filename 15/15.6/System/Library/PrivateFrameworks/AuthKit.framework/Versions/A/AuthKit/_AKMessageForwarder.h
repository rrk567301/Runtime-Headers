@interface _AKMessageForwarder : NSObject <AKAdaptiveServiceInterface> {
    id _weakReceiver;
    id _strongReceiver;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)activate;
- (id)initWithReceiver:(id)a0 strong:(char)a1;
- (id)initWithStrongReceiver:(id)a0;
- (id)initWithWeakReceiver:(id)a0;

@end
