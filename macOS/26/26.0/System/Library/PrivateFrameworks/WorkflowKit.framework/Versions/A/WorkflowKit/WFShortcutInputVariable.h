@protocol WFVariableProvider;

@interface WFShortcutInputVariable : WFVariable {
    id<WFVariableProvider> _variableProvider;
}

- (id)name;
- (id)icon;
- (BOOL)isAvailable;
- (void).cxx_destruct;
- (id)initWithVariableProvider:(id)a0 aggrandizements:(id)a1;
- (id)variableProvider;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (id)possibleContentClasses;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;

@end
