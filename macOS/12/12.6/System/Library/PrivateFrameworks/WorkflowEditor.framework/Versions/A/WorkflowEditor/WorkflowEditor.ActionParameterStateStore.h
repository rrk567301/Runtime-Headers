@interface WorkflowEditor.ActionParameterStateStore : NSObject <WFActionEventObserver> {
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ parameters;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;

@end
