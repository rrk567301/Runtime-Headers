@class NSLock, NSMutableString;

@interface SCROutputTextDisplayComponent : SCROutputComponent {
    NSMutableString *_currentDisplayString;
    NSLock *_currentDisplayStringLock;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (int)preflightSequentialSteps:(id)a0 runnerName:(id)a1;
- (void)nonBlockingActionsAreComplete;
- (id)literalEchoStringFromAction:(id)a0;
- (id)expandedStringFromAction:(id)a0;

@end
