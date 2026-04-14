@interface WFRunningProgressSuppressionStateMachine : WFStateMachine {
    void /* unknown type, empty encoding */ initialDialogAttribution;
    void /* unknown type, empty encoding */ waitingCancellable;
}

@property (nonatomic, weak) void /* function */ delegate;

- (void).cxx_destruct;
- (id)init;
- (void)decideRunningProgressIsAllowed:(BOOL)a0 withReason:(id)a1;
- (void)startedRunningAction:(id)a0 inShortcut:(id)a1;
- (void)startedRunningShortcut:(id)a0 withDialogAttribution:(id)a1;

@end
