@class NSResponder;

@interface WebResponderChainSink : NSResponder {
    NSResponder *_lastResponderInChain;
    BOOL _receivedUnhandledCommand;
}

- (void)detach;
- (void)doCommandBySelector:(SEL)a0;
- (BOOL)tryToPerform:(SEL)a0 with:(id)a1;
- (void)noResponderFor:(SEL)a0;
- (id)initWithResponderChain:(id)a0;
- (BOOL)receivedUnhandledCommand;

@end
