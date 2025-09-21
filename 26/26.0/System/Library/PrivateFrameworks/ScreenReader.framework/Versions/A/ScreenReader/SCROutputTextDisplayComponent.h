@class NSLock, NSMutableString;

@interface SCROutputTextDisplayComponent : SCROutputComponent {
    NSMutableString *_currentDisplayString;
    NSLock *_currentDisplayStringLock;
}

- (void)handleEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)expandedStringFromAction:(id)a0;
- (id)literalEchoStringFromAction:(id)a0;
- (void)nonBlockingActionsAreComplete;
- (int)preflightSequentialSteps:(id)a0 runnerName:(id)a1;

@end
