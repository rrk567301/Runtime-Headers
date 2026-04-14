@interface _TtCV14WorkflowEditor16TagFieldHostView11Coordinator : NSObject <NSTokenFieldDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ textCoordinator;
    void /* unknown type, empty encoding */ undoManager;
    void /* unknown type, empty encoding */ variableProvider;
}

- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void).cxx_destruct;
- (id)init;
- (id)tokenField:(id)a0 completionsForSubstring:(id)a1 indexOfToken:(long long)a2 indexOfSelectedItem:(long long *)a3;
- (unsigned long long)tokenField:(id)a0 styleForRepresentedObject:(id)a1;

@end
