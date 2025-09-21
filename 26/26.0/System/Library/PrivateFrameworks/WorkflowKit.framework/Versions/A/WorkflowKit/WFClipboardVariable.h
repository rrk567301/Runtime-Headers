@interface WFClipboardVariable : WFVariable

- (id)name;
- (id)icon;
- (BOOL)isAvailable;
- (id)initWithAggrandizements:(id)a0;
- (id)possibleContentClasses;
- (id)requiredAccessResources;
- (BOOL)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;

@end
