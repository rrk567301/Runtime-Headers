@class NSString;
@protocol WFVariableProvider;

@interface WFUserDefinedVariable : WFVariable {
    id<WFVariableProvider> _variableProvider;
}

@property (readonly, nonatomic) NSString *name;

- (id)UUID;
- (id)icon;
- (BOOL)isAvailable;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 variableProvider:(id)a1 aggrandizements:(id)a2;
- (id)variableProvider;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (id)possibleContentClasses;
- (BOOL)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (void)variableProvider:(id)a0 variableNameDidChangeTo:(id)a1;

@end
