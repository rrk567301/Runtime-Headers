@interface WorkflowEditor.VariableAutocompleter : NSObject <WFVariableObserver> {
    void /* unknown type, empty encoding */ variableProvider;
    void /* unknown type, empty encoding */ allowedVariableTypes;
    void /* unknown type, empty encoding */ showPlusMinus;
    void /* unknown type, empty encoding */ anyDataSource;
    void /* unknown type, empty encoding */ suggester;
    void /* unknown type, empty encoding */ namedVariables;
    void /* unknown type, empty encoding */ specialVariables;
    void /* unknown type, empty encoding */ needsUpdateSuggestions;
}

- (void).cxx_destruct;
- (id)init;
- (void)availableVariablesDidChange;

@end
