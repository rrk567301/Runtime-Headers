@interface WFCurrentDateVariable : WFVariable

- (id)name;
- (id)icon;
- (BOOL)isAvailable;
- (id)initWithAggrandizements:(id)a0;
- (id)possibleContentClasses;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;

@end
