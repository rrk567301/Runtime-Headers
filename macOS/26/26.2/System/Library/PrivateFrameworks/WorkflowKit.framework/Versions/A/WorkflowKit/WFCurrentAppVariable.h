@interface WFCurrentAppVariable : WFVariable

- (id)icon;
- (BOOL)isAvailable;
- (id)name;
- (id)initWithAggrandizements:(id)a0;
- (id)possibleContentClasses;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;

@end
