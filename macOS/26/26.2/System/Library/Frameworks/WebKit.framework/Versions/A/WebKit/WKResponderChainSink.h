@interface WKResponderChainSink : NSResponder {
    struct WeakObjCPtr<NSResponder> { id m_weakReference; } _lastResponderInChain;
    BOOL _didReceiveUnhandledCommand;
}

- (void)doCommandBySelector:(SEL)a0;
- (void)noResponderFor:(SEL)a0;
- (void)detach;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)tryToPerform:(SEL)a0 with:(id)a1;
- (id)initWithResponderChain:(id)a0;
- (BOOL)didReceiveUnhandledCommand;

@end
