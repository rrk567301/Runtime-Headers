@protocol WFVariableProvider;

@interface WFShortcutInputVariable : WFVariable {
    id<WFVariableProvider> _variableProvider;
}

- (id)name;
- (void).cxx_destruct;
- (id)icon;
- (BOOL)isAvailable;
- (id)variableProvider;
- (id)initWithVariableProvider:(id)a0 aggrandizements:(id)a1;
- (id)possibleContentClassesWithContext:(id)a0;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;

@end
