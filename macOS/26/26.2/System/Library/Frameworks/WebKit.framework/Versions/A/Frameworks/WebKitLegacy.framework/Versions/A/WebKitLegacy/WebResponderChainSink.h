@class NSResponder;

@interface WebResponderChainSink : NSResponder {
    NSResponder *_lastResponderInChain;
    BOOL _receivedUnhandledCommand;
}

- (void)doCommandBySelector:(SEL)a0;
- (void)noResponderFor:(SEL)a0;
- (void)detach;
- (BOOL)tryToPerform:(SEL)a0 with:(id)a1;
- (id)initWithResponderChain:(id)a0;
- (BOOL)receivedUnhandledCommand;

@end
