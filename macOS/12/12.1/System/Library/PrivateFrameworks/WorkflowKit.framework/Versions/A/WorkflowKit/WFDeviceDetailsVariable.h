@interface WFDeviceDetailsVariable : WFVariable

- (id)name;
- (BOOL)isAvailable;
- (id)iconImage;
- (id)initWithAggrandizements:(id)a0;
- (void)retrieveContentCollectionWithVariableSource:(id)a0 completionHandler:(id /* block */)a1;
- (id)possibleContentClassesWithContext:(id)a0;

@end
