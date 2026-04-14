@interface WFClipboardVariable : WFVariable

- (id)name;
- (id)iconSymbolName;
- (BOOL)isAvailable;
- (id)initWithAggrandizements:(id)a0;
- (BOOL)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (id)possibleContentClassesWithContext:(id)a0;
- (id)requiredAccessResources;

@end
