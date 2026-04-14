@class NSString;
@protocol WFVariableProvider;

@interface WFUserDefinedVariable : WFVariable {
    id<WFVariableProvider> _variableProvider;
}

@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)UUID;
- (id)icon;
- (BOOL)isAvailable;
- (id)initWithName:(id)a0 variableProvider:(id)a1 aggrandizements:(id)a2;
- (id)variableProvider;
- (id)possibleContentClassesWithContext:(id)a0;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)requiresModernVariableSupport;
- (void)variableProvider:(id)a0 variableNameDidChangeTo:(id)a1;

@end
