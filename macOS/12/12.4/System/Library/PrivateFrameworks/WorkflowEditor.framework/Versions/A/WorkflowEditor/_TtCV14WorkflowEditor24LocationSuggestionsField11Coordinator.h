@interface _TtCV14WorkflowEditor24LocationSuggestionsField11Coordinator : NSObject <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ resultsWindow;
    void /* unknown type, empty encoding */ textField;
    void /* unknown type, empty encoding */ currentLocalSearch;
    void /* unknown type, empty encoding */ localSearchResults;
    void /* unknown type, empty encoding */ recentsResults;
    void /* unknown type, empty encoding */ cachedDisplayString;
}

- (id)init;
- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;

@end
