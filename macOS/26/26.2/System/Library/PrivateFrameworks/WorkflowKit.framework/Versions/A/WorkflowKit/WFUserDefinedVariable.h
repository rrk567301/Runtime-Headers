@class NSNumber, NSOrderedSet, NSString;
@protocol WFVariableProvider;

@interface WFUserDefinedVariable : WFVariable {
    id<WFVariableProvider> _variableProvider;
}

@property (retain, nonatomic) NSNumber *cachedAvailablility;
@property (retain, nonatomic) NSOrderedSet *cachedContentClasses;
@property (readonly, nonatomic) NSString *name;

- (id)icon;
- (BOOL)isAvailable;
- (void).cxx_destruct;
- (id)UUID;
- (id)initWithName:(id)a0 variableProvider:(id)a1 aggrandizements:(id)a2;
- (id)variableProvider;
- (id)calculateAvailability;
- (id)initWithDictionary:(id)a0 variableProvider:(id)a1;
- (id)possibleContentClasses;
- (BOOL)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (void)variableProvider:(id)a0 variableNameDidChangeTo:(id)a1;
- (void)variableProviderDidInvalidateOutputDetails:(id)a0;

@end
