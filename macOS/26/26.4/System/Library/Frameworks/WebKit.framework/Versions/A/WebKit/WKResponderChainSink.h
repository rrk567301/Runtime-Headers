@interface WKResponderChainSink : NSResponder {
    struct WeakObjCPtr<NSResponder> { id m_weakReference; } _lastResponderInChain;
    BOOL _didReceiveUnhandledCommand;
}

- (void)noResponderFor:(SEL)a0;
- (void)detach;
- (void)doCommandBySelector:(SEL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)tryToPerform:(SEL)a0 with:(id)a1;
- (id)initWithResponderChain:(id)a0;
- (BOOL)didReceiveUnhandledCommand;

@end
