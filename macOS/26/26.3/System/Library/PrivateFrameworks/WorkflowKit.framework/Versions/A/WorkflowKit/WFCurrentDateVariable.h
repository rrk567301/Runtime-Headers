@interface WFCurrentDateVariable : WFVariable

- (BOOL)isAvailable;
- (id)name;
- (id)icon;
- (id)initWithAggrandizements:(id)a0;
- (id)possibleContentClasses;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;

@end
